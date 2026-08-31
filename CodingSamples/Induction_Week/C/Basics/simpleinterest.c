#include <stdio.h>

double GetSI(double, float, short int);

double GetSI(double p, float r, short int n)
{
	double result;
	result = (p * r * n) / 100;
	return result;

}
int main()
{
   double principle;
   float rate;
   short int period;
   double interest = 0.0;
   printf("Enter the values for principle / rate / period\n");
   scanf("%lf %f %hd", &principle, &rate, &period);
   interest = GetSI(principle, rate, period);

   printf("Calculate Interest is %lf", interest);
   return 0;

}
