namespace Banking;

//a class declared with 'sealed' modifier cannot be
//used as a base class by other classes
sealed class CurrentAccount : Account
{
    public override void Deposit(decimal amount)
    {
        if(Balance < 0)
            amount -= 500;
        Balance += amount;
    }

    public override void Withdraw(decimal amount)
    {
        Balance -= amount;
    }
}