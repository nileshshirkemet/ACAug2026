#include <stdio.h>

int main()
{
  int marks[5] = {45, 55, 65, 75, 85};

  int* pa = marks;
  register int i;
  for(i = 0; i< 5; i++)
  {
  	printf("value : %d\n", marks[i]);
  }
  for(i = 0; i< 5; i++)
  {
  	printf("value : %d\n", *(pa++));
  }
  for(i = 0; i< 5; i++)
  {
  	printf("value : %d\n", *(marks++));
  }
  return 0;
}
