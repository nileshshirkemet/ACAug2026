package banking;

//a class declared with final modofier cannot be sub-classed
final class CurrentAccount extends Account {
    
    public void withdraw(double amount) throws InsufficientFundsException {
        balance -= amount;
    }

    public void deposit(double amount) {
        if(balance < 0)
            amount -= 500;
        balance += amount;
    }
}
