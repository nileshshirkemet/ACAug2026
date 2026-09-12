#include <cstdio>

class Interval
{
public:
    //Parameterized constructor - is defined with one or more
    //parameters and it can be used as a default constructor
    //only if each such parameter is assigned a default argument
    Interval(short m = 0, short s = 0)
    {
        min = m + s / 60;
        sec = s % 60;
        ++count;
        printf("Interval instance activated.\n");
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

    //a non-static member function must be called on 
    //an object (using . operator), it receives 
    //'this' argument which points to the instance 
    //referred by object on which this function is 
    //called and as such this function can reference 
    //all other members defined in the class
    void Print() const
    {
        printf("Interval = %hd:%02hd\n", min, sec);
    }

    //a static member function can be called directly on
    //the class (using :: operator), it does not receive
    //'this' argument and as such it can only reference
    //other static members of the class 
    static int Active()
    {
        return count;
    }

    //Destructor - is a member function defined to reverse
    //any side-effect of constructor. It is automatically
    //called just before an instance is removed from the
    //memory or in case of an instance identified by a 
    //local varaible when this variable goes out of scope. 
    ~Interval()
    {
        --count;
        printf("Interval instance deactivated.\n");
    }
private:
    short min; //each instance gets a separate value
    short sec;
    static int count; //all instances share the same value
};

//a static member variable declared in a class must
//also be defined in the global scope
int Interval::count = 0;
