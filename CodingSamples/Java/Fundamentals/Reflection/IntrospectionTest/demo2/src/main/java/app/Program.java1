package app;

import finance.LoanHelper;
import finance.OpenPolicy;

public class Program {
    
    public static void main(String[] args) throws Throwable {
        double p = Double.parseDouble(args[0]);
        Class<?> c = Class.forName("finance.policies." + args[1] + "Loan");
        OpenPolicy policy = (OpenPolicy) c.getConstructor().newInstance();
        int m = 10;
        for(int n = 1; n <= m; ++n) {
            float r = policy.common(p, n);
            double emi = LoanHelper.monthlyInstallment(p, n, r);
            System.out.printf("%-6d%16.2f%n", n, emi);
        }
    }
}
