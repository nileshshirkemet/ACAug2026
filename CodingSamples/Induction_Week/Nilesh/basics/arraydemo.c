#include <stdio.h>
int main()
{
   int marks[5];

   for(int i = 0; i < 5; i++)
   {
		printf("Enter value of element %d\n", i+1);
		scanf("%d", &marks[i]);
   }

   for(int i = 0; i < 4215; i++)
   {
		printf("Displaying value of element at position %d is %d\n", i+1, marks[i]);
   }

   return 0;

}
