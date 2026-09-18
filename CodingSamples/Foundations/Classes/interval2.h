#include <cstdio>

class Interval
{
public:
    Interval(short m = 0, short s = 0)
    {
        min = m + s / 60;
        sec = s % 60;
        id = ++count;
    }

    //Copy constructor - is a constructor used for initializing
    //a new instance as a copy of another exisiting instance
    Interval(const Interval& original)
    {
        min = original.min;
        sec = original.sec;
        id = ++count;
    }

    void Adjust(long t) 
    {
        min = t / 60;
        sec = t % 60;
    }

    long Time() const
    {
        return 60 * min + sec;
    }

    void Print() const
    {
        printf("Interval<%d> = %hd:%02hd\n", id, min, sec);
    }

    //Operator overloading - extending a built-in operator
    //to support a class type. An operator can be overloaded
    //for a class as a member function only if the first
    //operand is of that class type
    Interval operator+(const Interval& other) const
    {
        return Interval(min + other.min, sec + other.sec);
    }

private:
    short min; 
    short sec;
    int id;
    inline static int count; //requires modern C++ (version 17)

    //a non-member function declared within a class 
    //with 'friend' keyword can access private members
    //of that class
    friend Interval operator*(int lhs, const Interval& rhs);
};

//overloading operator for a class as a non-member function
//because the first operand is not of class type
Interval operator*(int lhs, const Interval& rhs)
{
    return Interval(lhs * rhs.min, lhs * rhs.sec);
}
