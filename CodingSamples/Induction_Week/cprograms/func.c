#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}
int add1(int x,int y, int z)
{
	return x+y+z;
}
int main()
{
  printf("Function Calling");
  int result1=add(5,3);
  int result2=add1(1,2,3);
  printf("%d\n",result1);
  printf("%d\n",result2);
  return 0;
}

