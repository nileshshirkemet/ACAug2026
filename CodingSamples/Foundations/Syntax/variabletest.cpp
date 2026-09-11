#include <cstdio>

float rate = 0.85; //global variable (file scope - value in data-section)

int main(void) 
{
    float width = 0; //local variable (block scope - value on stack)
    float height = 0;
    printf("Dimensions of Banner: ");
    scanf("%f%f", &width, &height);

    short int count = 0;
    printf("Number of Banners: ");
    scanf("%hd", &count);

    double amount = count * width * height * rate;
    printf("Total Payment = %.2lf\n", amount);
}
