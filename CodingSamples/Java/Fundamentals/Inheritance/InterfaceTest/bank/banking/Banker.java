package banking;

//static factory class
public class Banker {
    
    private static long count;

    public static Account openCurrentAccount() {
        //implicitly typed local - type of local variable is inferred from initializer
        var acc = new CurrentAccount();
        acc.id = ++count + 100000000;
        return acc;
    }

    public static Account openSavingsAccount() {
        var acc = new SavingsAccount();
        acc.id = ++count + 200000000;
        return acc;
    }

    //a class with only static members does not require a new instance
    private Banker() {}
}
