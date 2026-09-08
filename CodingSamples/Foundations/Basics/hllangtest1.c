#include "common.h"

int main(void)
{
    long m = GetInt("Lower Limit: ");
    long n = GetInt("Upper Limit: ");

    if(m <= n)
    {
        long sum = n * (n + 1) / 2 - (m - 1) * m / 2;
        PutInt("Result = ",  sum);
    }

    PutStr("Goodbye!\n");
}