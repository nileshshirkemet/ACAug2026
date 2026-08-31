#include<stdio.h>
float simpleInterest(float p, float r, float t)
{
	return (p*r*t)/100;
}
int main()
{
 float p,r,t;
 printf("Enter the principal, rate and time:\n");
 scanf("%f%f%f",&p,&r,&t);
 printf("Simple Interest=%f",simpleInterest(p,r,t));
 return 0;
}
