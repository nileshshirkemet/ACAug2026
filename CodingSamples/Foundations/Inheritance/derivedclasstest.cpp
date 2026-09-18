#include "boxes.h"
#include <cstdio>

double BuyBoxes(const Box& each, int count)
{
    float rate = count > 5 ? 0.085 : 0.095;
    //dynamic binding is used when a virtual function
    //defined by a class is called on a reference
    //or a pointer of that class type
    return count * rate * each.Material(); 
}

int main(void)
{
    float a, b, c;
    printf("Dimensions of each box: ");
    scanf("%f%f%f", &a, &b, &c);

    int n;
    printf("Number of boxes to buy: ");
    scanf("%d", &n);

    Box lb(a, b, c);
    printf("Total payment for light-weight box = %.2lf and warehousing cost = %.2lf\n", BuyBoxes(lb, n), 0.002 * n * lb.Capacity());
    
    RigidBox hb(a, b, c, 4);
    printf("Total payment for heavy-weight box = %.2lf and warehousing cost = %.2lf\n", BuyBoxes(hb, n), 0.002 * n * hb.Capacity());
}