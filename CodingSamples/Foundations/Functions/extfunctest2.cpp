#include <cstdio>

extern "C" long gcd(long, long);

int main(void)
{
    long first = 0, second = 0;
    printf("Two positive integers: ");
    scanf("%ld%ld", &first, &second);

    printf("L.C.M = %ld\n", first * second / gcd(first, second));
}
