#include<stdio.h>

int main()
{
 int n,i;
 printf("enter size of an array:");
 scanf("%d",&n);
 int arr[n];
 printf("Enter elements:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("The elements in array are:");
 for(i=0;i<n;i++)
 {
  printf("%d\n",arr[i]);
 }
 return 0;
}
