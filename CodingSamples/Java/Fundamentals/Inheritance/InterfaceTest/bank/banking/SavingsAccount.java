package banking;

final class SavingsAccount extends Account implements Profitable {
    
    //a field declared with final modifier cannot 
    //be reinitialized
    final static double MIN_BAL = 5000;

    SavingsAccount() {
        balance = MIN_BAL;
    }

    public void deposit(double amount) {
        balance += amount;
    }

    public void withdraw(double amount) throws InsufficientFundsException {
        if(balance - amount < MIN_BAL)
            throw new InsufficientFundsException();
        balance -= amount;
    }

    public double interest(int months) {
        float rate = balance < 25000 ? 0.03f : 0.04f;
        return balance * rate * months / 12;
    }
}
