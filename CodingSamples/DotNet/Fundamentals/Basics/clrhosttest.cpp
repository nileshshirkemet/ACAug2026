#include <iostream>
#include <filesystem>
#include <cstdlib>
#include <dlfcn.h>

#ifndef ASSEMBLY
    #error "ERROR: compile with -DASSEMBLY=app-assembly-path"
#endif
#ifndef FRAMEWORK
    #error "ERROR: compile with -DFRAMEWORK=version"
#endif

#define STR(x) #x
#define XSTR(x) STR(x)
#define ASSEMBLY_PATH XSTR(ASSEMBLY)
#define FRAMEWORK_VER XSTR(FRAMEWORK)

int main(int argc, char* argv[])
{
    using namespace std;
    using namespace std::filesystem;

    // 1. Resolve DOTNET_ROOT and construct CoreCLR framework directory
    const char* dotnet_root = getenv("DOTNET_ROOT");
    if (!dotnet_root || !*dotnet_root)
    {
        cerr << "Error: DOTNET_ROOT environment variable is not set.\n";
        return 1;
    }

    path fx_dir = path(dotnet_root) / "shared" / "Microsoft.NETCore.App" / FRAMEWORK_VER;
    if (!exists(fx_dir))
    {
        cerr << "Framework directory does not exist: " << fx_dir << '\n';
        return 1;
    }

    // 2. Resolve canonical path
    string app = canonical(ASSEMBLY_PATH).string();

    // 3. Build TPA list
    string tpa;
    for (const auto& entry : directory_iterator(fx_dir))
    {
        if (entry.path().extension() == ".dll")
        {
            tpa += entry.path().string() + ":";
        }
    }
    tpa += app;

    // 4. Load libcoreclr.so
    string so = (fx_dir / "libcoreclr.so").string();
    void* lib = dlopen(so.c_str(), RTLD_NOW | RTLD_GLOBAL);
    if (!lib)
    {
        cerr << dlerror() << '\n';
        return 1;
    }

    auto init = reinterpret_cast<int(*)(const char*, const char*, int, const char**, const char**, void**, unsigned int*)>(dlsym(lib, "coreclr_initialize"));
    auto exec = reinterpret_cast<int(*)(void*, unsigned int, int, const char**, const char*, unsigned int*)>(dlsym(lib, "coreclr_execute_assembly"));
    auto term = reinterpret_cast<int(*)(void*, unsigned int)>(dlsym(lib, "coreclr_shutdown"));

    // 5. Initialize CoreCLR
    string fx_dir_str = fx_dir.string();
    const char* k[] = { "TRUSTED_PLATFORM_ASSEMBLIES", "APP_PATHS" };
    const char* v[] = { tpa.c_str(), fx_dir_str.c_str() };
    void* host = nullptr;
    unsigned int id = 0, code = 0;

    if (init(app.c_str(), "Host", 2, k, v, &host, &id) < 0)
    {
        dlclose(lib);
        return 1;
    }

    // 6. Forward command line arguments to managed Main(string[] args)
    const char** args = const_cast<const char**>(argv + 1);
    exec(host, id, argc - 1, args, app.c_str(), &code);

    term(host, id);
    dlclose(lib);

    return code;
}

