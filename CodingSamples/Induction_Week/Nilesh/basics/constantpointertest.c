#include <stdio.h>

int main()
{
   int num1 = 100;
   int num2 = 200;
   
   int* p1 = &num1;
   const int* p2 = &num1; //pointer to constant

   int* const p3 = &num2; // pointer itself is constant

   p3 = &num1;

   
   *p1 = *p1 + 10;
   //*p2 = *p2 + 20; will not work as read only

   printf("Value of num1 is %d\n", *p1);
   printf("Value of num1 is %d\n", *p2);
  
   return 0;

}
