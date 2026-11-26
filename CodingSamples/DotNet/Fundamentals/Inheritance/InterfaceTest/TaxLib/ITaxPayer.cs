namespace Taxation;

public interface ITaxPayer
{
    //pure property
    string Category { get; }

    //pure method
    decimal AnnualIncome();

    //default interface mnethod - is an implicitly virtual method defined
    //in an interface with a default implementation, such a method can
    //only be applied to the interface type in which it is defined
    decimal IncomeTax()
    {
        decimal income = AnnualIncome();
        return income > 120000 ? 0.15m * (income - 120000) : 0;
    }
}
