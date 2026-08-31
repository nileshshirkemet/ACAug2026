#include <stdio.h>

int main()
{
  int marks[] = {22, 33, 44, 55, 66};

  /*
  marks[0] = 22;
  marks[1] = 33;
  marks[2] = 44;
  marks[3] = 55;
  marks[4] = 66;
  */

  for (int i = 0; i < 5; i++)
  {
		printf("Element at index %d has value %d\n", i, marks[i]);
  }

  return 0;
}
