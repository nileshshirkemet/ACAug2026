fwkver=$(dotnet --list-runtimes | grep Microsoft.NETCore.App | awk '{printf("%s", $2)}')
tfm="net${fwkver%.*}"
rid=$(dotnet --info | grep "RID:" | awk '{print $2}')
if ! command -v unzip >/dev/null 2>&1; then
    echo "Please first install unzip: sudo apt install unzip"
    exit 1
fi
echo "Installing ILAsm..."
wget  -q -O /tmp/iltools.zip https://www.nuget.org/api/v2/package/runtime.$rid.Microsoft.NETCore.ILAsm/$fwkver
unzip -q /tmp/iltools.zip -d /tmp/iltools
cp /tmp/iltools/runtimes/$rid/native/ilasm ~/.dotnet/tools/
chmod +x ~/.dotnet/tools/ilasm
rm -r /tmp/iltools*
echo "Installing ILDAsm..."
wget -q -O /tmp/iltools.zip https://www.nuget.org/api/v2/package/runtime.$rid.Microsoft.NETCore.ILDAsm/$fwkver
unzip -q /tmp/iltools.zip -d /tmp/iltools
cp /tmp/iltools/runtimes/$rid/native/ildasm ~/.dotnet/tools/ildasm
chmod +x ~/.dotnet/tools/ildasm
rm -r /tmp/iltools*
echo "Done."
echo '#!/bin/bash
echo "{
  \"runtimeOptions\": {
    \"tfm\": \"'"$tfm"'\",
    \"framework\": {
      \"name\": \"Microsoft.NETCore.App\",
      \"version\": \"'"$fwkver"'\"
    }
  }
}"
' > ~/.dotnet/tools/ilrtconf
chmod +x ~/.dotnet/tools/ilrtconf

