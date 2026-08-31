#include "finance.h"
#include <stdio.h>

int main()
{
	double principle, rate;
	int period;

	printf("Enter Principle / Rate / Period\n");
	scanf("%lf %lf %d", &principle, &rate, &period);

	double interest = SI(principle, rate, period);

	printf("Calculated Interest is %lf\n", interest);

	return 0;

}
