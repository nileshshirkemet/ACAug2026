#include <stdio.h>

double SI(double,double, int);

double SI(double p, double r, int n)
{
	return (p * r * n / 100);

}

int main()
{
	double principle, rate;
	int period;

	printf("Enter principle / rate / period\n");
	scanf("%lf %lf %d", &principle, &rate, &period);

	double interest = SI(10000, 12, 3);
	// double interest = SI(principle, rate, period);

	printf("Calculated Interest : %lf\n", interest);

	return 0;

}
