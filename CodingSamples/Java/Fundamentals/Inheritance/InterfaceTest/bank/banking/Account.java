package banking;

//a class defined with 'abstract' modifier
//does not support instantiation
public abstract class Account {

    long id;

    protected double balance;

    public long id() {
        return id;
    }

    public double balance() {
        return balance;
    }

    //a method declared with abstract modifier cannot
    //be defined with any specific implementation, 
    //such a method must be overridden in the subclass
    public abstract void deposit(double amount);

    public abstract void withdraw(double amount) throws InsufficientFundsException;

    //a method declared with final modifier cannot
    //be overridden in the subclass, runtime can optimize
    //a call to such a method through static binding
    public final void transfer(double amount, Account that) throws InsufficientFundsException {
        if(this == that)
            throw new IllegalTransferException();
        this.withdraw(amount);
        that.deposit(amount);
    }

}
