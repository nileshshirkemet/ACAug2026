namespace Banking;

public abstract class Account
{
    public long Id { get; internal set; }

    public decimal Balance { get; protected set; }

    public abstract void Deposit(decimal amount);

    public abstract void Withdraw(decimal amount);
}
