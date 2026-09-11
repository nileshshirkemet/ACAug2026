#include <cstdio>

//Z11BannerPricefff
double BannerPrice(float border, float width, float height)
{
    float rate = width > height ? 0.85 : 0.95;
    return width * height * rate + 2 * (width + height) * border * 0.75;
}

//_Z11BannerPriceff
double BannerPrice(float width, float height)
{
    return BannerPrice(0.01 * width, width, height);
}

int main(void)
{
    float w = 0, h = 0;
    printf("Dimensions of Banner: ");
    scanf("%f%f", &w, &h);

    int n = 0;
    printf("Number of Banners: ");
    scanf("%d", &n);

    printf("Total payment for premium banners = %.2lf\n", n * BannerPrice(2, w, h));
    printf("Total payment for regular banners = %.2lf\n", n * BannerPrice(w, h));

}
