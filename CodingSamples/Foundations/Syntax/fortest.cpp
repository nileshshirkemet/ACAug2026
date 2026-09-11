#include <cstdio>

int main(void)
{
    long lower = 0, upper = 0;
    printf("Lower and Upper Limits: ");
    scanf("%ld%ld", &lower, &upper);

    long sum = 0;

    for(long num = lower; num <= upper; ++num)
    {
        sum += num * num;
    }

    printf("Sum of Squares = %ld\n", sum);

}