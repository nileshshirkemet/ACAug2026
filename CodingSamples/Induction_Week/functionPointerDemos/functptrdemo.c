#include <stdio.h>

int isPrime(int);
int isPalindrome(int);
int isEven(int);
int isOdd(int);
int Reverse(int);
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



int main()
{ 
  int num;
  printf("Enter the number to check for Even / Odd / Prime\n");
  scanf("%d", &num);
  if (isEven(num))
     printf("Entered number is Even\n");
  else
     printf("Entered number is Odd\n");
  if (isPrime(num))
   	 printf("Entered number is Prime\n");
  else
  	 printf("Entered number is not Prime\n");
  //int reverse = Reverse(num);
  if (isPalindrome(num))
  	 printf("Entered number is Palindrome\n");
  else
  	 printf("Entered number is not a Palindrome\n");
  return 0;

}
