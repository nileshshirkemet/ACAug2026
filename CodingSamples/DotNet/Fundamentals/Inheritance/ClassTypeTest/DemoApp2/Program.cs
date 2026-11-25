using DemoApp;

//top-level statements can be used in one source file
//of an Exe type project, this statements are copied
//into the Main method of a compiler generated class

Interval a = new Interval(3, 45);
Interval b = new Interval(5, 20);
Print("Interval a", a);
Print("Interval b", b);
Print("Sum of a and b", a + b);



//local function - it cannot be overloaded
void Print(string label, Interval info)
{
    Console.WriteLine("{0} = {1}", label, info.ToString());
}
