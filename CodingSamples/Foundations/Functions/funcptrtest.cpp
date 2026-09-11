#include <cstdio>

double Expense(int year)
{
    return 5 * year - 1;
}

double Income(int year)
{
    return year * year + 1;
}

double CommonSum(int count, double (*sequence)(int))
{
    double total = 0;
    for(int i = 1; i <= count; ++i)
    {
        total += sequence(i);
    }
    return total;
}


int main(void)
{
    int n;
    printf("Number of years: ");
    scanf("%d", &n);

    printf("Total expense = %.2lf\n", CommonSum(n, &Expense));
    printf("Total income  = %.2lf\n", CommonSum(n, &Income));
}