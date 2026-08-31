#include <stdio.h>

int main()
{
	double principle, rate;
	int period;

	printf("Enter principle / rate / period\n");
	scanf("%lf %lf %d", &principle, &rate, &period);

	double interest = (principle * rate * period) / 100;
	// double interest = SI(principle, rate, period);

	printf("Calculated Interest : %lf\n", interest);

	return 0;

}
