class Program {

    public static void main(String[] args) throws Throwable {
        var acc = new JointAccount();
        acc.deposit(10000);
        System.out.println("Joint account opened for Jack and Jill.");
        System.out.printf("Initial balance = %d%n", acc.balance());
        Thread first = Thread.ofPlatform().start(() -> {
            System.out.println("Jack is withdrawing 6000...");
            if(!acc.withdraw(6000))
                System.out.println("Jack's transaction failed!");
        });
        Thread second = Thread.ofPlatform().start(() -> {
            System.out.println("Jill is withdrawing 7000...");
            if(!acc.withdraw(7000))
                System.out.println("Jill's transaction failed!");  
        });
        first.join(); //wait for first thread to exit
        second.join(); //wait for second thread to exit
        System.out.printf("Final balance = %d%n", acc.balance());

    }
}
