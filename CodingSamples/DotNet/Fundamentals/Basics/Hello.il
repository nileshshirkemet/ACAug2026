.assembly Hello {}
.assembly extern System.Console {} //shared by Microsoft.NETCore.App framework

.method public static void Run()
{
	.entrypoint

	ldstr	"Hello (IL) World!!"
	call	void [System.Console]System.Console::WriteLine(string)
	ret
}

