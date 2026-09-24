package app;

//import all names in banking package
import banking.*;

public class Program {

    //a method can accept variable number of arguments through
    //its last parameter declared with ..., these arguments
    //are actually passed as an array to the method
    private static void payInterest(int months, Account... accounts) {
        for(Account acc : accounts){
            if(acc instanceof Profitable p){
                //Profitable p = (Profitable) acc;
                double amount = p.interest(months);
                acc.deposit(amount);
            }
        }
    }

    public static void main(String[] args) {
        Account jill = Banker.openSavingsAccount();
        jill.deposit(15000);
        Account jack = Banker.openCurrentAccount();
        jack.deposit(30000);
        Account john = Banker.openSavingsAccount();
        john.deposit(35000);
        System.out.printf("Jill's Account ID is %d and Balance is %.2f%n", jill.id(), jill.balance());
        System.out.printf("Jack's Account ID is %d and Balance is %.2f%n", jack.id(), jack.balance());
        System.out.printf("John's Account ID is %d and Balance is %.2f%n", john.id(), john.balance());
        System.out.println("----------------------------------------");
        if(args.length > 0){
            try{
                double payment = Double.parseDouble(args[0]);
                System.out.printf("Jill is paying %.2f to Jack...%n", payment);
                jill.transfer(payment, jack);
            }catch(InsufficientFundsException e){
                System.out.println("Payment failed due to lack of funds!");
            }catch(Exception e){
                System.out.printf("Error: %s%n", e);
            }
        }else{
            System.out.println("Paying annual interest...");
            //payInterest(12, new Account[]{jill, jack, john});
            payInterest(12, jill, jack, john);
        }
        System.out.println("----------------------------------------");
        System.out.printf("Jill's closing Balance = %.2f%n", jill.balance());
        System.out.printf("Jack's closing Balance = %.2f%n", jack.balance());
        System.out.printf("John's closing Balance = %.2f%n", john.balance());
    }
}
