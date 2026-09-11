#include <cstdio>

int main(void) 
{
    float width = 0; 
    float height = 0;
    printf("Dimensions of Banner: ");
    scanf("%f%f", &width, &height);

    short int count = 0;
    printf("Number of Banners: ");
    scanf("%hd", &count);

    if(width > height)
    {   
        double amount = count * width * height * 0.85;
        printf("Total payment for landscape banners: %.2lf\n", amount);
    }
    else
    {
        double amount = count * width * height * 0.95;
        printf("Total payment for portrait banners: %.2lf\n", amount);
    }
    puts("Goodbye!");
}
