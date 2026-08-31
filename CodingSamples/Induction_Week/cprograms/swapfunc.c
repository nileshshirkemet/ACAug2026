#include<stdio.h>
void swap(int a, int b) //call by val
{
	int temp;
	temp =a;
	a=b;
	b=temp;
}
int main()
{
int x,y;
printf("Enter two numbers");
scanf("%d%d",&x,&y);
printf("Before Swapping x=%d and y=%d",x,y);
swap(x,y);
printf("After Swapping x=%d and y=%d",x,y);
return 0;
}
