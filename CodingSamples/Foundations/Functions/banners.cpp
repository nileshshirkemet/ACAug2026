#include "banners.h"

static double BannerArea(float w, float h)
{
    return w * h;
}

double BuyBanners(float w, float h, int n)
{
    float r = n < 5 ? 0.95 : 0.85;
    return n * r * BannerArea(w, h);
}