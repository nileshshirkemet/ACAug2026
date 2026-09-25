class Program {

    public static void main(String[] args) {
        if(args.length < 2){
            System.out.println("USAGE: java Program yearly-installment number-of-years");
            System.exit(0);
        }
        double p = Double.parseDouble(args[0]);
        int n = Integer.parseInt(args[1]);
        var inv = new Investment(p, n);
        //passing lambda-expression for functional interface
        System.out.printf("Future value for riskless investment: %.2f%n", inv.futureValue(t -> t < 5 ? 0.06f : 0.07f));
        float min = 0.08f;
        //passing lambda-expression which captures local variable (min) by 
        //copy making this variable effectively final
        System.out.printf("Future value for riskful investment : %.2f%n", inv.futureValue(t -> min + (t / 3) * 0.005f));
    }
}
