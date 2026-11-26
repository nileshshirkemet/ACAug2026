namespace Taxation;

public struct Worker(int jobs) : ITaxPayer
{
    public string Category { get; } = "Laborer";

    //explicit interface implementation - enables a type
    //to provide a private implementation for a method
    //which it inherits from an interface so that it can
    //only be called through that interface 
    decimal ITaxPayer.AnnualIncome()
    {
        return 180000 + 400 * jobs;
    }    
}
