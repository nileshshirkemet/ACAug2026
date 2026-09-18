#include "interval.h"
#include <iostream>
#include <string>

using namespace std;

template<typename T> 
T Select(T first, T second) 
{
    if(first > second)
        return first;
    return second;
}

template<> //explicit specialization of Select function template for T=string
string Select(string first, string second) 
{
    if(first.size() > second.size())
        return first;
    return second;
}

int main(void)
{
    double dx = 4.25, dy = 3.75;
    cout << "Selected double = "
         << Select(dx, dy)
         << endl;

    string sx = "Tuesday", sy = "Thursday";
    cout << "Selected string = "
         << Select(sx, sy)
         << endl;

    Interval ix(3, 45), iy(5, 40);
    cout << "Selected Interval = "
         << Select(ix, iy)
         << endl;    
}
