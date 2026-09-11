#include <cstdio>

double BannerPrice(float width, float height, short thickness = 1)
{
    float rate = width > height ? 0.85 : 0.95;
    return width * height * rate * thickness;
}

int main(void)
{
    float w = 0, h = 0;
    printf("Dimensions of Banner: ");
    scanf("%f%f", &w, &h);

    int n = 0;
    printf("Number of Banners: ");
    scanf("%d", &n);

    printf("Total payment for premium banners = %.2lf\n", n * BannerPrice(w, h, 3));
    printf("Total payment for regular banners = %.2lf\n", n * BannerPrice(w, h)); //using default(third) argument
}
