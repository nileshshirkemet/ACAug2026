#include <cstdio>

void Swap(double* first, double* second)
{
    double third = first[0];
    first[0] = second[0];
    second[0] = third;
}

double Average(double first, double second, double* deviation)
{
    //p[0] === *p
    *deviation = first > second ? (first - second) / 2 : (second - first) / 2;
    return (first + second) / 2;
}

int main(void)
{
    double x = 0, y = 0;
    printf("Two real values: ");
    scanf("%lf%lf", &x, &y);

    printf("Original values = %lf, %lf\n", x, y);
    Swap(&x, &y);
    printf("Swapped values  = %lf, %lf\n", x, y);

    double d = 0;
    double a = Average(x, y, &d);
    printf("Average is %lf with deviation of %lf\n", a, d);
}