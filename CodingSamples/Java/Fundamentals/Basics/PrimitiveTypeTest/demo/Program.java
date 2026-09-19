class Program {

    public static void main(String[] args) {
        System.out.println("Welcome Investor!");
        double p = Double.parseDouble(args[0]);
        int n = Integer.parseInt(args[1]);
        System.out.printf("Future value of riskless investment: %.2f%n", Investment.futureValue(p, n));
    }
}
