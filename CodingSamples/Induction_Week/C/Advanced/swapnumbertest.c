#include <stdio.h>

void Swap(int*, int*);

void Swap(int* p, int* q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;

}

int main()
{
   int num1, num2;

   printf("Enter values for number 1 & 2 \n");
   scanf("%d %d", &num1, &num2);

   printf("Values of num1 & num2 before calling Swap are %d / %d\n", num1, num2);
   Swap(&num1, &num2);
   printf("Values of num1 & num2 after calling Swap are %d / %d\n", num1, num2);

   return 0;

}
