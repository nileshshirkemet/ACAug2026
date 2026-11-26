namespace Banking;

//a class declared with public modofier is visible
//outside of the current assembly/project
//a class declared with static modifier can only
//define static members and as such it does not
//suport an instance constructor
public static class Banker
{
    private static int count;

    public static void OpenBank()
    {
        Console.WriteLine("Welcome to Bank of MET!");
    }

    public static Account OpenCurrentAccount()
    {
        //implicitly typed local, type is inferred from initializer
        var acc = new CurrentAccount();
        acc.Id = ++count + 100_000_000;
        return acc;
    }

    public static Account OpenSavingsAccount()
    {
        var acc = new SavingsAccount();
        acc.Id = ++count + 200_000_000;
        return acc;
    }

    //extension method - is a member of a static class whose first parameter
    //is declared with 'this' as qualifier, such a method can be called as
    //an instance method of first parameter type by using namespace of its class
    public static void Transfer(this Account source, decimal amount, Account target)
    {
        if(ReferenceEquals(source, target))
            throw new InvalidOperationException("Illegal transfer to same account");
        source.Withdraw(amount);
        target.Deposit(amount);
    }
}
