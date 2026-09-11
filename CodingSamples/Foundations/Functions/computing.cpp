#include <cmath>

static double Term(long x, float y)
{
    return pow(x, y);
}

double Compute(long first, long last, float degree)
{
    double result = 0;
    for(long value = first; value <= last; ++value)
    {
        result += Term(value, degree);
    }
    return result;
}
