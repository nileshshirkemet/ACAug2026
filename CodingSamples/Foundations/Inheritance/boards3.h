namespace Ads
{
    class Signboard
    {
    public:
       virtual double Area() const = 0;

        double Cost() const;

        virtual ~Signboard() {}

    protected:
        float rate;
    };

    class Wasteful
    {
    public:
        virtual double Scrap() const = 0;
    };

    //Virtual Inheritance (VI) - enables a class to share the 
    //subobject of the virtual base within the instance of its
    //own derived class which also inherits from another class
    //with the same virtual base tp revent duplication and
    //ambiguity in multiple inheritance (diamond problem)
    class RectangularBoard : public virtual Signboard
    {
    public:
        RectangularBoard(float diagonal);

        double Area() const;
    private:
        float length, breadth;
    };


    class CircularBoard : public virtual Signboard, public Wasteful
    {
    public:
        CircularBoard(float diameter);

        double Area() const;

        double Scrap() const;
        
    private:
        float radius;
    };

    class FancyBoard : public RectangularBoard, public CircularBoard
    {
    public:
        FancyBoard(float width);

        double Area() const;
    };
}
