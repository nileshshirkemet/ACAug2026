#include<stdio.h>
int main()

{
int n,i,sum=0;
printf("Size of array");
scanf("%d",&n);
int arr[n];
printf("Enter the elements in array:\n");
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
 sum+=arr[i];
}
printf("Sum =%d",sum);
return 0;
}
