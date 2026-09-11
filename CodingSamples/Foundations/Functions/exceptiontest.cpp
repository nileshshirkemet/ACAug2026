#include <cstdio>

double BoxCapacity(float length, float breadth, float height, float thickness)
{
    if(thickness >= length / 2 || thickness >= breadth / 2 || thickness >= height / 2)
        throw thickness;  //raising exception of float type
    return (length - 2 * thickness) * (breadth - 2 * thickness) * (height - 2 * thickness);
}

int main(void)
{
    float a = 0, b = 0, c = 0, d = 0;
    printf("Dimensions of Box : ");
    scanf("%f%f%f", &a, &b, &c);
    printf("Material thickness: ");
    scanf("%f", &d);

    try
    {
        printf("Storage capacity of box = %.3lf\n", BoxCapacity(a, b, c, d));
    }
    catch(float e)
    {
        printf("Invalid thickness: %d\n", e);
    }
    puts("Goodbye!");
}