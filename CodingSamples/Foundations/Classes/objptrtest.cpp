#include "interval1.h"
#include <cstdio>

int main(void)
{
    int n;
    printf("Number of Intervals: ");
    scanf("%d", &n);

    if(n == 1)
    {
        //new operator allocates memory for a new instance 
        //of a given class on the runtime-heap, calls the
        //specified constructor for this instance and returns
        //its address
        Interval* a = new Interval(2, 105);
        a->Print(); //a[0].Print();
        //delete operator deallocates the memory assigned
        //to the instance with given address on the runtime-heap
        //after calling the destructor for this instance
        delete a;
    }
    else
    {
        //new[] operator allocates memory for a new array
        //of a given class with specified number of instances
        //on the runtime-heap, calls the default constructor
        //for each of those instances and returns the address
        //of the first instance
        Interval* a = new Interval[n];
        for(int i = 0; i < n; ++i)
        {
            a[i].Adjust(40 * i + 225);
            a[i].Print();
        }
        //delete[] operator deallocates the memory assigned 
        //to array of instances at the given address on
        //the runtime-heap after calling destructor on each
        //of those instances
        delete[] a;
    }
}