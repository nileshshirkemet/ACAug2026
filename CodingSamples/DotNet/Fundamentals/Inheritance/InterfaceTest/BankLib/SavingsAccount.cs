namespace Banking;

sealed class SavingsAccount : Account, IProfitable
{
    const decimal MinBal = 5000;

    internal SavingsAccount()
    {
        Balance = MinBal;
    }

    public override void Deposit(decimal amount)
    {
        Balance += amount;
    }

    public override void Withdraw(decimal amount)
    {
        if(Balance - amount < MinBal)
            throw new InsufficientFundsException();
        Balance -= amount;
    }

    public decimal AddInterest(int months)
    {
        decimal rate = Balance < 5 * MinBal ? 0.03m : 0.04m;
        decimal interest = Balance * rate * months / 12;
        return Balance += interest;
    }
}