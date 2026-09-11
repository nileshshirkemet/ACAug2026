#include <cstdio>

//Array - is a list of values of same type packed together
//in the memory, each element of an array can be referenced
//using an index which ranges from 0 to n - 1 where n is the
//number of elements in that array
const float rate[] = {0.85, 1.15, 1.65, 2.05, 3.45};

int main(void)
{
    float width = 0, height = 0;
    printf("Dimensions of Banner: ");
    scanf("%f%f", &width, &height);

    short count = 0;
    printf("Number of Banners: ");
    scanf("%hd", &count);

    int m;
    printf("Material [1-5]: ");
    scanf("%d", &m);

    double amount = count * width * height * rate[m - 1];
    printf("Total Payment = %.2lf\n", amount);
}
