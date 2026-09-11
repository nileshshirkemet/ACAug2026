#include <cstdio>

int main(void)
{
    short age;
    printf("Age: ");
    scanf("%hd", &age);

    float rate = 0;
    switch(age)
    {
        case 16:
            rate = 75;
            break;
        case 18:
            rate = 125;
            break;
        case 21:
            rate = 150;
            break;
        case 50:
            rate = 250;
            break;
        default:
            rate = 50;
    }
    printf("Gift Amount: %.2lf\n", age * rate);
}
