
//  .NET IL Disassembler.  Version 10.0.5



// Metadata version: v4.0.30319
.assembly extern System.Runtime
{
  .publickeytoken = (B0 3F 5F 7F 11 D5 0A 3A )                         // .?_....:
  .ver 10:0:0:0
}
.assembly extern System.Console
{
  .publickeytoken = (B0 3F 5F 7F 11 D5 0A 3A )                         // .?_....:
  .ver 10:0:0:0
}
.assembly DemoApp
{
  .custom instance void [System.Runtime]System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(int32) = ( 01 00 08 00 00 00 00 00 ) 
  .custom instance void [System.Runtime]System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor() = ( 01 00 01 00 54 02 16 57 72 61 70 4E 6F 6E 45 78   // ....T..WrapNonEx
                                                                                                                   63 65 70 74 69 6F 6E 54 68 72 6F 77 73 01 )       // ceptionThrows.

  // --- The following custom attribute is added automatically, do not uncomment -------
  //  .custom instance void [System.Runtime]System.Diagnostics.DebuggableAttribute::.ctor(valuetype [System.Runtime]System.Diagnostics.DebuggableAttribute/DebuggingModes) = ( 01 00 07 01 00 00 00 00 ) 

  .custom instance void [System.Runtime]System.Runtime.Versioning.TargetFrameworkAttribute::.ctor(string) = ( 01 00 19 2E 4E 45 54 43 6F 72 65 41 70 70 2C 56   // ....NETCoreApp,V
                                                                                                              65 72 73 69 6F 6E 3D 76 31 30 2E 30 01 00 54 0E   // ersion=v10.0..T.
                                                                                                              14 46 72 61 6D 65 77 6F 72 6B 44 69 73 70 6C 61   // .FrameworkDispla
                                                                                                              79 4E 61 6D 65 09 2E 4E 45 54 20 31 30 2E 30 )    // yName..NET 10.0
  .custom instance void [System.Runtime]System.Reflection.AssemblyCompanyAttribute::.ctor(string) = ( 01 00 07 44 65 6D 6F 41 70 70 00 00 )             // ...DemoApp..
  .custom instance void [System.Runtime]System.Reflection.AssemblyConfigurationAttribute::.ctor(string) = ( 01 00 05 44 65 62 75 67 00 00 )                   // ...Debug..
  .custom instance void [System.Runtime]System.Reflection.AssemblyFileVersionAttribute::.ctor(string) = ( 01 00 07 31 2E 30 2E 30 2E 30 00 00 )             // ...1.0.0.0..
  .custom instance void [System.Runtime]System.Reflection.AssemblyInformationalVersionAttribute::.ctor(string) = ( 01 00 05 31 2E 30 2E 30 00 00 )                   // ...1.0.0..
  .custom instance void [System.Runtime]System.Reflection.AssemblyProductAttribute::.ctor(string) = ( 01 00 07 44 65 6D 6F 41 70 70 00 00 )             // ...DemoApp..
  .custom instance void [System.Runtime]System.Reflection.AssemblyTitleAttribute::.ctor(string) = ( 01 00 07 44 65 6D 6F 41 70 70 00 00 )             // ...DemoApp..
  .hash algorithm 0x00008004
  .ver 1:0:0:0
}
.module DemoApp.dll
// MVID: {667ba1d5-fc1e-4cb7-bfa0-209c02fa15ea}
.custom instance void [System.Runtime]System.Runtime.CompilerServices.RefSafetyRulesAttribute::.ctor(int32) = ( 01 00 0B 00 00 00 00 00 ) 
.imagebase 0x00400000
.file alignment 0x00000200
.stackreserve 0x00100000
.subsystem 0x0003       // WINDOWS_CUI
.corflags 0x00000001    //  ILONLY
// Image base: 0x0x7433809ea000


// =============== CLASS MEMBERS DECLARATION ===================

.class private auto ansi beforefieldinit Program
       extends [System.Runtime]System.Object
{
  .custom instance void [System.Runtime]System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor() = ( 01 00 00 00 ) 
  .method private hidebysig static void  '<Main>$'(string[] args) cil managed
  {
    .entrypoint
    // Code size       315 (0x13b)
    .maxstack  3
    .locals init (class DemoApp.Interval V_0,
             class DemoApp.Interval V_1,
             class DemoApp.Interval V_2,
             class DemoApp.Interval V_3,
             valuetype DemoApp.Rectangle V_4,
             valuetype DemoApp.Rectangle V_5)
    IL_0000:  ldc.i4.3
    IL_0001:  ldc.i4.s   45
    IL_0003:  newobj     instance void DemoApp.Interval::.ctor(int32,
                                                               int32)
    IL_0008:  stloc.0
    IL_0009:  ldc.i4.5
    IL_000a:  ldc.i4.s   20
    IL_000c:  newobj     instance void DemoApp.Interval::.ctor(int32,
                                                               int32)
    IL_0011:  stloc.1
    IL_0012:  ldc.i4.2
    IL_0013:  ldc.i4.s   105
    IL_0015:  newobj     instance void DemoApp.Interval::.ctor(int32,
                                                               int32)
    IL_001a:  stloc.2
    IL_001b:  ldloc.1
    IL_001c:  stloc.3
    IL_001d:  ldstr      "Interval a"
    IL_0022:  ldloc.0
    IL_0023:  call       void Program::'<<Main>$>g__Print|0_0'(string,
                                                               object)
    IL_0028:  nop
    IL_0029:  ldstr      "Interval b"
    IL_002e:  ldloc.1
    IL_002f:  call       void Program::'<<Main>$>g__Print|0_0'(string,
                                                               object)
    IL_0034:  nop
    IL_0035:  ldstr      "Interval c"
    IL_003a:  ldloc.2
    IL_003b:  call       void Program::'<<Main>$>g__Print|0_0'(string,
                                                               object)
    IL_0040:  nop
    IL_0041:  ldstr      "Interval d"
    IL_0046:  ldloc.3
    IL_0047:  call       void Program::'<<Main>$>g__Print|0_0'(string,
                                                               object)
    IL_004c:  nop
    IL_004d:  ldstr      "Sum of a and b"
    IL_0052:  ldloc.0
    IL_0053:  ldloc.1
    IL_0054:  call       class DemoApp.Interval DemoApp.Interval::op_Addition(class DemoApp.Interval,
                                                                              class DemoApp.Interval)
    IL_0059:  call       void Program::'<<Main>$>g__Print|0_0'(string,
                                                               object)
    IL_005e:  nop
    IL_005f:  ldstr      "---------------------------------------"
    IL_0064:  call       void [System.Console]System.Console::WriteLine(string)
    IL_0069:  nop
    IL_006a:  ldstr      "Interval a is identical to b: {0}"
    IL_006f:  ldloc.0
    IL_0070:  ldloc.1
    IL_0071:  ceq
    IL_0073:  box        [System.Runtime]System.Boolean
    IL_0078:  call       void [System.Console]System.Console::WriteLine(string,
                                                                        object)
    IL_007d:  nop
    IL_007e:  ldstr      "Interval a is identical to c: {0}"
    IL_0083:  ldloc.0
    IL_0084:  ldloc.2
    IL_0085:  ceq
    IL_0087:  box        [System.Runtime]System.Boolean
    IL_008c:  call       void [System.Console]System.Console::WriteLine(string,
                                                                        object)
    IL_0091:  nop
    IL_0092:  ldstr      "Interval d is identical to b: {0}"
    IL_0097:  ldloc.3
    IL_0098:  ldloc.1
    IL_0099:  ceq
    IL_009b:  box        [System.Runtime]System.Boolean
    IL_00a0:  call       void [System.Console]System.Console::WriteLine(string,
                                                                        object)
    IL_00a5:  nop
    IL_00a6:  ldstr      "---------------------------------------"
    IL_00ab:  call       void [System.Console]System.Console::WriteLine(string)
    IL_00b0:  nop
    IL_00b1:  ldstr      "Interval a is equal to b: {0}"
    IL_00b6:  ldloc.0
    IL_00b7:  ldloc.1
    IL_00b8:  call       bool [System.Runtime]System.Object::Equals(object,
                                                                    object)
    IL_00bd:  box        [System.Runtime]System.Boolean
    IL_00c2:  call       void [System.Console]System.Console::WriteLine(string,
                                                                        object)
    IL_00c7:  nop
    IL_00c8:  ldstr      "Interval a is equal to c: {0}"
    IL_00cd:  ldloc.0
    IL_00ce:  ldloc.2
    IL_00cf:  call       bool [System.Runtime]System.Object::Equals(object,
                                                                    object)
    IL_00d4:  box        [System.Runtime]System.Boolean
    IL_00d9:  call       void [System.Console]System.Console::WriteLine(string,
                                                                        object)
    IL_00de:  nop
    IL_00df:  ldstr      "Interval d is equal to b: {0}"
    IL_00e4:  ldloc.3
    IL_00e5:  ldloc.1
    IL_00e6:  call       bool [System.Runtime]System.Object::Equals(object,
                                                                    object)
    IL_00eb:  box        [System.Runtime]System.Boolean
    IL_00f0:  call       void [System.Console]System.Console::WriteLine(string,
                                                                        object)
    IL_00f5:  nop
    IL_00f6:  ldstr      "---------------------------------------"
    IL_00fb:  call       void [System.Console]System.Console::WriteLine(string)
    IL_0100:  nop
    IL_0101:  ldloca.s   V_5
    IL_0103:  initobj    DemoApp.Rectangle
    IL_0109:  ldloca.s   V_5
    IL_010b:  ldc.r4     8.75
    IL_0110:  call       instance void modreq([System.Runtime]System.Runtime.CompilerServices.IsExternalInit) DemoApp.Rectangle::set_Length(float32)
    IL_0115:  nop
    IL_0116:  ldloca.s   V_5
    IL_0118:  ldc.r4     6.25
    IL_011d:  call       instance void modreq([System.Runtime]System.Runtime.CompilerServices.IsExternalInit) DemoApp.Rectangle::set_Breadth(float32)
    IL_0122:  nop
    IL_0123:  ldloc.s    V_5
    IL_0125:  stloc.s    V_4
    IL_0127:  ldstr      "Rectangle e"
    IL_012c:  ldloc.s    V_4
    IL_012e:  box        DemoApp.Rectangle
    IL_0133:  call       void Program::'<<Main>$>g__Print|0_0'(string,
                                                               object)
    IL_0138:  nop
    IL_0139:  nop
    IL_013a:  ret
  } // end of method Program::'<Main>$'

  .method public hidebysig specialname rtspecialname 
          instance void  .ctor() cil managed
  {
    // Code size       8 (0x8)
    .maxstack  8
    IL_0000:  ldarg.0
    IL_0001:  call       instance void [System.Runtime]System.Object::.ctor()
    IL_0006:  nop
    IL_0007:  ret
  } // end of method Program::.ctor

  .method assembly hidebysig static void 
          '<<Main>$>g__Print|0_0'(string label,
                                  object info) cil managed
  {
    .custom instance void [System.Runtime]System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor() = ( 01 00 00 00 ) 
    // Code size       20 (0x14)
    .maxstack  8
    IL_0000:  nop
    IL_0001:  ldstr      "{0} = {1}"
    IL_0006:  ldarg.0
    IL_0007:  ldarg.1
    IL_0008:  callvirt   instance string [System.Runtime]System.Object::ToString()
    IL_000d:  call       void [System.Console]System.Console::WriteLine(string,
                                                                        object,
                                                                        object)
    IL_0012:  nop
    IL_0013:  ret
  } // end of method Program::'<<Main>$>g__Print|0_0'

} // end of class Program

.class private auto ansi beforefieldinit DemoApp.Interval
       extends [System.Runtime]System.Object
{
  .field private initonly int32 '<Minutes>k__BackingField'
  .custom instance void [System.Runtime]System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor() = ( 01 00 00 00 ) 
  .custom instance void [System.Runtime]System.Diagnostics.DebuggerBrowsableAttribute::.ctor(valuetype [System.Runtime]System.Diagnostics.DebuggerBrowsableState) = ( 01 00 00 00 00 00 00 00 ) 
  .field private initonly int32 '<Seconds>k__BackingField'
  .custom instance void [System.Runtime]System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor() = ( 01 00 00 00 ) 
  .custom instance void [System.Runtime]System.Diagnostics.DebuggerBrowsableAttribute::.ctor(valuetype [System.Runtime]System.Diagnostics.DebuggerBrowsableState) = ( 01 00 00 00 00 00 00 00 ) 
  .method public hidebysig specialname rtspecialname 
          instance void  .ctor(int32 min,
                               int32 sec) cil managed
  {
    // Code size       30 (0x1e)
    .maxstack  8
    IL_0000:  ldarg.0
    IL_0001:  ldarg.1
    IL_0002:  ldarg.2
    IL_0003:  ldc.i4.s   60
    IL_0005:  div
    IL_0006:  add
    IL_0007:  stfld      int32 DemoApp.Interval::'<Minutes>k__BackingField'
    IL_000c:  ldarg.0
    IL_000d:  ldarg.2
    IL_000e:  ldc.i4.s   60
    IL_0010:  rem
    IL_0011:  stfld      int32 DemoApp.Interval::'<Seconds>k__BackingField'
    IL_0016:  ldarg.0
    IL_0017:  call       instance void [System.Runtime]System.Object::.ctor()
    IL_001c:  nop
    IL_001d:  ret
  } // end of method Interval::.ctor

  .method public hidebysig specialname instance int32 
          get_Minutes() cil managed
  {
    .custom instance void [System.Runtime]System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor() = ( 01 00 00 00 ) 
    // Code size       7 (0x7)
    .maxstack  8
    IL_0000:  ldarg.0
    IL_0001:  ldfld      int32 DemoApp.Interval::'<Minutes>k__BackingField'
    IL_0006:  ret
  } // end of method Interval::get_Minutes

  .method public hidebysig specialname instance int32 
          get_Seconds() cil managed
  {
    .custom instance void [System.Runtime]System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor() = ( 01 00 00 00 ) 
    // Code size       7 (0x7)
    .maxstack  8
    IL_0000:  ldarg.0
    IL_0001:  ldfld      int32 DemoApp.Interval::'<Seconds>k__BackingField'
    IL_0006:  ret
  } // end of method Interval::get_Seconds

  .method public hidebysig instance int32 
          Time() cil managed
  {
    // Code size       22 (0x16)
    .maxstack  2
    .locals init (int32 V_0)
    IL_0000:  nop
    IL_0001:  ldc.i4.s   60
    IL_0003:  ldarg.0
    IL_0004:  call       instance int32 DemoApp.Interval::get_Minutes()
    IL_0009:  mul
    IL_000a:  ldarg.0
    IL_000b:  call       instance int32 DemoApp.Interval::get_Seconds()
    IL_0010:  add
    IL_0011:  stloc.0
    IL_0012:  br.s       IL_0014

    IL_0014:  ldloc.0
    IL_0015:  ret
  } // end of method Interval::Time

  .method public hidebysig specialname static 
          class DemoApp.Interval  op_Addition(class DemoApp.Interval lhs,
                                              class DemoApp.Interval rhs) cil managed
  {
    // Code size       37 (0x25)
    .maxstack  3
    .locals init (class DemoApp.Interval V_0)
    IL_0000:  nop
    IL_0001:  ldarg.0
    IL_0002:  callvirt   instance int32 DemoApp.Interval::get_Minutes()
    IL_0007:  ldarg.1
    IL_0008:  callvirt   instance int32 DemoApp.Interval::get_Minutes()
    IL_000d:  add
    IL_000e:  ldarg.0
    IL_000f:  callvirt   instance int32 DemoApp.Interval::get_Seconds()
    IL_0014:  ldarg.1
    IL_0015:  callvirt   instance int32 DemoApp.Interval::get_Seconds()
    IL_001a:  add
    IL_001b:  newobj     instance void DemoApp.Interval::.ctor(int32,
                                                               int32)
    IL_0020:  stloc.0
    IL_0021:  br.s       IL_0023

    IL_0023:  ldloc.0
    IL_0024:  ret
  } // end of method Interval::op_Addition

  .method public hidebysig virtual instance string 
          ToString() cil managed
  {
    // Code size       99 (0x63)
    .maxstack  3
    .locals init (bool V_0,
             int32 V_1,
             string V_2)
    IL_0000:  nop
    IL_0001:  ldarg.0
    IL_0002:  call       instance int32 DemoApp.Interval::get_Seconds()
    IL_0007:  ldc.i4.s   10
    IL_0009:  clt
    IL_000b:  stloc.0
    IL_000c:  ldloc.0
    IL_000d:  brfalse.s  IL_0038

    IL_000f:  ldarg.0
    IL_0010:  call       instance int32 DemoApp.Interval::get_Minutes()
    IL_0015:  stloc.1
    IL_0016:  ldloca.s   V_1
    IL_0018:  call       instance string [System.Runtime]System.Int32::ToString()
    IL_001d:  ldstr      ":0"
    IL_0022:  ldarg.0
    IL_0023:  call       instance int32 DemoApp.Interval::get_Seconds()
    IL_0028:  stloc.1
    IL_0029:  ldloca.s   V_1
    IL_002b:  call       instance string [System.Runtime]System.Int32::ToString()
    IL_0030:  call       string [System.Runtime]System.String::Concat(string,
                                                                      string,
                                                                      string)
    IL_0035:  stloc.2
    IL_0036:  br.s       IL_0061

    IL_0038:  ldarg.0
    IL_0039:  call       instance int32 DemoApp.Interval::get_Minutes()
    IL_003e:  stloc.1
    IL_003f:  ldloca.s   V_1
    IL_0041:  call       instance string [System.Runtime]System.Int32::ToString()
    IL_0046:  ldstr      ":"
    IL_004b:  ldarg.0
    IL_004c:  call       instance int32 DemoApp.Interval::get_Seconds()
    IL_0051:  stloc.1
    IL_0052:  ldloca.s   V_1
    IL_0054:  call       instance string [System.Runtime]System.Int32::ToString()
    IL_0059:  call       string [System.Runtime]System.String::Concat(string,
                                                                      string,
                                                                      string)
    IL_005e:  stloc.2
    IL_005f:  br.s       IL_0061

    IL_0061:  ldloc.2
    IL_0062:  ret
  } // end of method Interval::ToString

  .method public hidebysig virtual instance int32 
          GetHashCode() cil managed
  {
    // Code size       19 (0x13)
    .maxstack  2
    .locals init (int32 V_0)
    IL_0000:  nop
    IL_0001:  ldarg.0
    IL_0002:  call       instance int32 DemoApp.Interval::get_Minutes()
    IL_0007:  ldarg.0
    IL_0008:  call       instance int32 DemoApp.Interval::get_Seconds()
    IL_000d:  add
    IL_000e:  stloc.0
    IL_000f:  br.s       IL_0011

    IL_0011:  ldloc.0
    IL_0012:  ret
  } // end of method Interval::GetHashCode

  .method public hidebysig virtual instance bool 
          Equals(object other) cil managed
  {
    // Code size       57 (0x39)
    .maxstack  2
    .locals init (class DemoApp.Interval V_0,
             bool V_1,
             bool V_2)
    IL_0000:  nop
    IL_0001:  ldarg.1
    IL_0002:  isinst     DemoApp.Interval
    IL_0007:  stloc.0
    IL_0008:  ldloc.0
    IL_0009:  ldnull
    IL_000a:  cgt.un
    IL_000c:  stloc.1
    IL_000d:  ldloc.1
    IL_000e:  brfalse.s  IL_0033

    IL_0010:  nop
    IL_0011:  ldarg.0
    IL_0012:  call       instance int32 DemoApp.Interval::get_Minutes()
    IL_0017:  ldloc.0
    IL_0018:  callvirt   instance int32 DemoApp.Interval::get_Minutes()
    IL_001d:  bne.un.s   IL_002f

    IL_001f:  ldarg.0
    IL_0020:  call       instance int32 DemoApp.Interval::get_Seconds()
    IL_0025:  ldloc.0
    IL_0026:  callvirt   instance int32 DemoApp.Interval::get_Seconds()
    IL_002b:  ceq
    IL_002d:  br.s       IL_0030

    IL_002f:  ldc.i4.0
    IL_0030:  stloc.2
    IL_0031:  br.s       IL_0037

    IL_0033:  ldc.i4.0
    IL_0034:  stloc.2
    IL_0035:  br.s       IL_0037

    IL_0037:  ldloc.2
    IL_0038:  ret
  } // end of method Interval::Equals

  .property instance callconv(8) int32 Minutes()
  {
    .get instance int32 DemoApp.Interval::get_Minutes()
  } // end of property Interval::Minutes
  .property instance callconv(8) int32 Seconds()
  {
    .get instance int32 DemoApp.Interval::get_Seconds()
  } // end of property Interval::Seconds
} // end of class DemoApp.Interval

.class private sequential ansi sealed beforefieldinit DemoApp.Rectangle
       extends [System.Runtime]System.ValueType
{
  .field private initonly float32 '<Length>k__BackingField'
  .custom instance void [System.Runtime]System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor() = ( 01 00 00 00 ) 
  .custom instance void [System.Runtime]System.Diagnostics.DebuggerBrowsableAttribute::.ctor(valuetype [System.Runtime]System.Diagnostics.DebuggerBrowsableState) = ( 01 00 00 00 00 00 00 00 ) 
  .field private initonly float32 '<Breadth>k__BackingField'
  .custom instance void [System.Runtime]System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor() = ( 01 00 00 00 ) 
  .custom instance void [System.Runtime]System.Diagnostics.DebuggerBrowsableAttribute::.ctor(valuetype [System.Runtime]System.Diagnostics.DebuggerBrowsableState) = ( 01 00 00 00 00 00 00 00 ) 
  .method public hidebysig specialname instance float32 
          get_Length() cil managed
  {
    .custom instance void [System.Runtime]System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor() = ( 01 00 00 00 ) 
    .custom instance void [System.Runtime]System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor() = ( 01 00 00 00 ) 
    // Code size       7 (0x7)
    .maxstack  8
    IL_0000:  ldarg.0
    IL_0001:  ldfld      float32 DemoApp.Rectangle::'<Length>k__BackingField'
    IL_0006:  ret
  } // end of method Rectangle::get_Length

  .method public hidebysig specialname instance void modreq([System.Runtime]System.Runtime.CompilerServices.IsExternalInit) 
          set_Length(float32 'value') cil managed
  {
    .custom instance void [System.Runtime]System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor() = ( 01 00 00 00 ) 
    // Code size       8 (0x8)
    .maxstack  8
    IL_0000:  ldarg.0
    IL_0001:  ldarg.1
    IL_0002:  stfld      float32 DemoApp.Rectangle::'<Length>k__BackingField'
    IL_0007:  ret
  } // end of method Rectangle::set_Length

  .method public hidebysig specialname instance float32 
          get_Breadth() cil managed
  {
    .custom instance void [System.Runtime]System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor() = ( 01 00 00 00 ) 
    .custom instance void [System.Runtime]System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor() = ( 01 00 00 00 ) 
    // Code size       7 (0x7)
    .maxstack  8
    IL_0000:  ldarg.0
    IL_0001:  ldfld      float32 DemoApp.Rectangle::'<Breadth>k__BackingField'
    IL_0006:  ret
  } // end of method Rectangle::get_Breadth

  .method public hidebysig specialname instance void modreq([System.Runtime]System.Runtime.CompilerServices.IsExternalInit) 
          set_Breadth(float32 'value') cil managed
  {
    .custom instance void [System.Runtime]System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor() = ( 01 00 00 00 ) 
    // Code size       8 (0x8)
    .maxstack  8
    IL_0000:  ldarg.0
    IL_0001:  ldarg.1
    IL_0002:  stfld      float32 DemoApp.Rectangle::'<Breadth>k__BackingField'
    IL_0007:  ret
  } // end of method Rectangle::set_Breadth

  .method public hidebysig instance float64 
          Area() cil managed
  {
    // Code size       20 (0x14)
    .maxstack  2
    .locals init (float64 V_0)
    IL_0000:  nop
    IL_0001:  ldarg.0
    IL_0002:  call       instance float32 DemoApp.Rectangle::get_Length()
    IL_0007:  ldarg.0
    IL_0008:  call       instance float32 DemoApp.Rectangle::get_Breadth()
    IL_000d:  mul
    IL_000e:  conv.r8
    IL_000f:  stloc.0
    IL_0010:  br.s       IL_0012

    IL_0012:  ldloc.0
    IL_0013:  ret
  } // end of method Rectangle::Area

  .method public hidebysig virtual instance string 
          ToString() cil managed
  {
    // Code size       44 (0x2c)
    .maxstack  3
    .locals init (float32 V_0,
             string V_1)
    IL_0000:  nop
    IL_0001:  ldarg.0
    IL_0002:  call       instance float32 DemoApp.Rectangle::get_Length()
    IL_0007:  stloc.0
    IL_0008:  ldloca.s   V_0
    IL_000a:  call       instance string [System.Runtime]System.Single::ToString()
    IL_000f:  ldstr      " x "
    IL_0014:  ldarg.0
    IL_0015:  call       instance float32 DemoApp.Rectangle::get_Breadth()
    IL_001a:  stloc.0
    IL_001b:  ldloca.s   V_0
    IL_001d:  call       instance string [System.Runtime]System.Single::ToString()
    IL_0022:  call       string [System.Runtime]System.String::Concat(string,
                                                                      string,
                                                                      string)
    IL_0027:  stloc.1
    IL_0028:  br.s       IL_002a

    IL_002a:  ldloc.1
    IL_002b:  ret
  } // end of method Rectangle::ToString

  .property instance callconv(8) float32 Length()
  {
    .get instance float32 DemoApp.Rectangle::get_Length()
    .set instance void modreq([System.Runtime]System.Runtime.CompilerServices.IsExternalInit) DemoApp.Rectangle::set_Length(float32)
  } // end of property Rectangle::Length
  .property instance callconv(8) float32 Breadth()
  {
    .get instance float32 DemoApp.Rectangle::get_Breadth()
    .set instance void modreq([System.Runtime]System.Runtime.CompilerServices.IsExternalInit) DemoApp.Rectangle::set_Breadth(float32)
  } // end of property Rectangle::Breadth
} // end of class DemoApp.Rectangle


// =============================================================

// *********** DISASSEMBLY COMPLETE ***********************
