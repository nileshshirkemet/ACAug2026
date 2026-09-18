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

    class RectangularBoard : public Signboard
    {
    public:
        RectangularBoard(float diagonal);

        double Area() const;
    private:
        float length, breadth;
    };

    //Multiple Inheritance (MI) - occurs when one class is
    //directly derived from two or more other classes
    class CircularBoard : public Signboard, public Wasteful
    {
    public:
        CircularBoard(float diameter);

        double Area() const;

        double Scrap() const;
        
    private:
        float radius;
    };
}
