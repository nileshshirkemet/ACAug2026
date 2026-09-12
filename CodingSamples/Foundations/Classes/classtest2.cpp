#include "banners2.h"
#include <cstdio>

double BuyBanners(Banner each, int count)
{
    float rate = count < 5 ? 0.95 : 0.85;
    return count * rate * each.Area(); //Banner::Area(&each)
}

int main(void)
{
    int n;
    printf("Number of banners: ");
    scanf("%d", &n);

    Banner a; //instantiation using default constructor
    printf("Total payment for standard banners = %.2lf\n", BuyBanners(a, n));

    float w, h;
    printf("Dimensions of custom banner: ");
    scanf("%f%f", &w, &h);

    Banner b;
    b.Resize(w, h); //Banner::Resize(&b, w, h)
    printf("Total payment for custom banners = %.2lf\n", BuyBanners(b, n));

    Banner c;
    c.Resize(w, h);
    c.Reshape(Geometry::Hexagonal);
    printf("Total payment for custom hexagonal banners = %.2lf\n", BuyBanners(c, n));
}