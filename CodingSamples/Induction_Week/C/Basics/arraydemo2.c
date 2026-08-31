#include <stdio.h>

int main()
{
  int marks[5];

  for (int j = 0; j < 15; j++)
  {
  		printf("Enter Element No %d\n", j+1);
		scanf("%d", &marks[j]);
  }

  for (int i = 0; i < 15; i++)
  {
		printf("Element No %d has value %d\n", i+1, marks[i]);
  }

  return 0;
}
