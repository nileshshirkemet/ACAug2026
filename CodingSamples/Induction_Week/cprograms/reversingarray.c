#include<stdio.h>
int main()
{
int n,i;
printf("Size");
scanf("%d",&n);
int arr[n];
printf("Enter elements in array");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Reversing an array:\n");
for(i=n-1;i>=0;i--)
{
 printf("%d\n",arr[i]);
}
return 0;
}
