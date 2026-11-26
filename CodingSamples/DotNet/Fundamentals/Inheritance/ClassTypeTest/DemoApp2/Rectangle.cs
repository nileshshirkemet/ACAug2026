namespace DemoApp;

struct Rectangle
{
    //init-only property can only be set in the initializer
    public float Length { get; init; }

    public float Breadth { get; init; }

    public double Area()
    {
        return Length * Breadth;
    }

    public override string ToString()
    {
        return Length + " x " + Breadth;
    }
}