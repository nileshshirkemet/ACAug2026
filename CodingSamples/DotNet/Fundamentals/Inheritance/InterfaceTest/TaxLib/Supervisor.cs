namespace Taxation;

public struct Supervisor(int subordinates) : ITaxPayer
{
    public string Category { get; } = "Manager";

    decimal ITaxPayer.AnnualIncome()
    {
        return 480000 + 2000 * subordinates;
    }
}
