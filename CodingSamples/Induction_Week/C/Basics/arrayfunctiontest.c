#include <stdio.h>

double GetAverage(int[], int);

double GetAverage(int m[], int size)
{
	double total = 0;

	for(int i = 0; i < size; i++)
	{
		total = total + m[i];
	}
	return total / size;
}


int main()
{
   int marks[5];
   double avg = 0.0;

   printf("Entering the marks of Students for 5 subjects\n");
   
   for(int i = 0; i < 5; i++)
   {
		printf("Enter the marks for Subject %d\n", i+1);
		scanf("%d", &marks[i]);
   }

   for(int j = 0; j < 5; j++)
   {
		printf("Marks of Student for Subject %d is %d\n", j+1, marks[j]);
   }

   avg = GetAverage(marks, 5);

   printf("Average is %lf\n", avg);

   return 0;
}
