#include <cstdio>

extern double Compute(long, long, float = 1);

int main(void)
{
    long lower = 0, upper = 0;
    printf("Lower and Upper Limits: ");
    scanf("%ld%ld", &lower, &upper);

    printf("Result of simple computation  = %.3lf\n", Compute(lower, upper));
    printf("Result of complex computation = %.3lf\n", Compute(lower, upper, 2.5));
}