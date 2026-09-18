#include <iostream>

class Interval
{
public:
    //a consutuctor which can be called with one parameter
    //is used automaticaly for conversion from that
    //parameter type unless it is declared with explicit
    explicit Interval(short m=0, short s=0)
    {
        min = m + s / 60;
        sec = s % 60;
    }

    Interval(const Interval& original)
    {
        min = original.min;
        sec = original.sec;
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

    bool operator>(const Interval& other)
    {
        return Time() > other.Time();
    }

private:
    short min; 
    short sec;

    friend std::ostream& operator<<(std::ostream& out, const Interval& value);
};

std::ostream& operator<<(std::ostream& out, const Interval& value)
{
    if(value.sec < 10)
        out << value.min << ":0" << value.sec;
    else
        out << value.min << ":" << value.sec;
    return out;
}
