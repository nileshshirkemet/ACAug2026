#include "interval2.h"
#include <cstdio>

int main(void)
{
    Interval a(4, 30);
    a.Print();
    puts("Copying...");
    Interval b = a; //activating instance using copy-constructor
    b.Print();
    Interval c(5, 45);
    c.Print();
    puts("Adding...");
    Interval d = b + c; //b.operator+(c)
    d.Print();
    puts("Scaling...");
    Interval e = 3 * d; //operator*(3, d)
    e.Print();
}