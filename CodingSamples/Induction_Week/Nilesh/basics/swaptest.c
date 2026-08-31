#include <stdio.h>
/*void MySwap(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("In swap function values are %d/%d\n", num1, num2);
}*/

void MySwap(int* p1, int* p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
   int num1, num2;
   num1 = 100;
   num2 = 200;
   printf("Before swapping %d/%d\n", num1, num2);
   MySwap(&num1, &num2);
   printf("After swapping %d/%d\n", num1, num2);
   return 0;
}
