#include "interval1.h"
#include <cstdio>

//a function should accept a class type argument by
//reference qualified with const intead of accepting
//it by value which requires a copy and a call to
//destructor
double Speed(float distance, const Interval& duration)
{
    //duration.Adjust(0);
    return 3.6 * distance / duration.Time();
}

int main(void)
{
    Interval a(3, 70); //activating Interval instance using parameterized constructor
    a.Print();
    printf("Speed for this interval = %.2f\n", Speed(600, a));
    long l;
    printf("Time: ");
    scanf("%ld", &l);
    if(l > 10)
    {
        Interval b; //activating Interval instance using default constructor
        b.Adjust(l);
        b.Print();
        printf("Speed for this interval = %.2f\n", Speed(600, b));
    }//destructor will be called on instance referred by b

    printf("Number of active Intervals = %d\n", Interval::Active());
}//destructor will be called on instance referred by a