#include <stdio.h>

int isPrime(int);
int isPalindrome(int);
int isEven(int);
int isOdd(int);
int Reverse(int);
//int SumAll(int, int);
//int SumAllEven(int, int);
//int SumAllOdd(int, int);
int SumOfAny(int, int, int (*check)(int)); 
//Function pointer declaration
//int (*check)(int);

int isEven(int num)
{
   return num % 2 == 0;
}

int isOdd(int num)
{
   return num % 2 != 0;

}

int isPrime(int num)
{
	for(int i = 2; i < num/2; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}

int Reverse(int num)
{
   int og = num;
   int rev = 0;
   int rem = 0;
   while (og > 0)
   {
	   rem = og % 10;
	   rev = rev * 10 + rem;
	   og = og / 10;
   }
   //printf("Reverse %d\n", rev);
   return rev;
}
int isPalindrome(int num)
{
	int rev = Reverse(num);
	if (rev == num)
		return 1;
	else 
		return 0;
}
/*
int SumAll(int l, int h)
{
    int sum = 0;
	for(int i = l; i <= h; i++)
	{
		sum = sum + i;
	}
	return sum;
}

int SumAllEven(int l, int h)
{
    int sum = 0;
	for(int i = l; i <= h; i++)
	{
	    if (isEven(i))
			sum = sum + i;
	}
	return sum;
}

int SumAllOdd(int l, int h)
{
    int sum = 0;
	for(int i = l; i <= h; i++)
	{
	    if (isOdd(i))
			sum = sum + i;
	}
	return sum:wq
	;
}

*/

int SumOfAny(int l, int h, int (*check)(int))
{
    int sum = 0;
	for(int i = l; i <= h; i++)
	{
	    if (check(i))
			sum = sum + i;
	}
	return sum;
}

int main()
{ 
  int num;
  int lower, higher;
  printf("Enter the Range for Summation (lower/higher values\n");
  scanf("%d %d", &lower, &higher);
  printf("The Sum of All Even: %d\n", SumOfAny(lower, higher, isEven));
  printf("The Sum of All Odd: %d\n", SumOfAny(lower, higher, isOdd));
  printf("The Sum of All Primes: %d\n", SumOfAny(lower, higher, isPrime));
  return 0;

}
