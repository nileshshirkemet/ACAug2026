#include "banners.h"
#include <cstdio>


int main(void)
{
    float w = 0, h = 0;
    printf("Dimensions of Banner: ");
    scanf("%f%f", &w, &h);

    int n = 0;
    printf("Number of Banners: ");
    scanf("%d", &n);

    printf("Total payment = %.2lf\n", BuyBanners(w, h, n));
}
