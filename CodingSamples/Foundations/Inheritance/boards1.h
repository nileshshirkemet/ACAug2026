namespace Ads
{
    class Signboard
    {
    public:
        //pure virtual function - has a logical zero in the slot of v-table
        virtual double Area() const = 0;

        double Cost() const;

        virtual ~Signboard() {}

    protected: //members are also visible in a derived class
        float rate;
    };

    class RectangularBoard : public Signboard
    {
    public:
        RectangularBoard(float diagonal);

        double Area() const;
    private:
        float length, breadth;
    };

    class CircularBoard : public Signboard
    {
    public:
        CircularBoard(float diameter);

        double Area() const;
    private:
        float radius;
    };
}
