using DemoApp;

//top-level statements can be used in one source file
//of an Exe type project, this statements are copied
//into the Main method of a compiler generated class

Interval a = new Interval(3, 45);
Interval b = new Interval(5, 20);
Interval c = new Interval(2, 105);
Interval d = b;
Print("Interval a", a);
Print("Interval b", b);
Print("Interval c", c);
Print("Interval d", d);
Print("Sum of a and b", a + b);
Console.WriteLine("---------------------------------------");
Console.WriteLine("Interval a is identical to b: {0}", ReferenceEquals(a, b));
Console.WriteLine("Interval a is identical to c: {0}", ReferenceEquals(a, c));
Console.WriteLine("Interval d is identical to b: {0}", ReferenceEquals(d, b));
Console.WriteLine("---------------------------------------");
Console.WriteLine("Interval a is equal to b: {0}", Equals(a, b));
Console.WriteLine("Interval a is equal to c: {0}", Equals(a, c));
Console.WriteLine("Interval d is equal to b: {0}", Equals(d, b));
Console.WriteLine("---------------------------------------");
Rectangle e = new Rectangle
{
    Length = 8.75f,
    Breadth = 6.25f
};
//automatic boxing in implicit conversion of a value type (Rectangle) 
//to its compatible reference type (object)
Print("Rectangle e", e);

//local function - it cannot be overloaded
void Print(string label, object info)
{
    Console.WriteLine("{0} = {1}", label, info.ToString());
}
