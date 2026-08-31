#include <stdio.h>


int main()
{
   int num1 = 100;
   int* p = &num1;  // will have address of some integer variable
   double num2 = 200.0;

   // double* q = &num1   Gives warning Invalid Pointer types

   double* q = &num2; //correct initialisation

   num1 = num1 + 10;
   printf("Values of num1 = %d\n", num1);
   *p = *p + 10; // * is indirection operator, gets the values at the address 
                 // referred by pointer
   printf("Values of num1 = %d\n", num1);
   printf("Address of p is %p\n", p);

   return 0;

}
