#include <stdio.h>

int main()
{
  int num1 = 100;
  int num2 = 200;

  int* p1 = &num1;
  int* p2 = &num2;
  double* p3;

  //direct addressing
  printf("Value of num1 = %d\n", num1);
  printf("Value of num2 = %d\n", num2);
  //indirect addressing
  *p1 = *p1 + 10;
  *p2 = *p2 + 20;
  printf("Value of num1 = %d\n", *p1);
  printf("Value of num2 = %d\n", *p2);

  return 0;

}
