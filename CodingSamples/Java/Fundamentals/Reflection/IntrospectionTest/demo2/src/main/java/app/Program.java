package app;

import java.lang.reflect.Method;

import finance.LoanHelper;

public class Program {
    
    public static void main(String[] args) throws Throwable {
        double p = Double.parseDouble(args[0]);
        Class<?> c = Class.forName("finance.policies." + args[1] + "Loan");
        Object policy = c.getConstructor().newInstance();
        Method scheme = c.getMethod(args.length > 2 ? args[2] : "common", double.class, int.class);
        int m = 10;
        for(int n = 1; n <= m; ++n) {
            //late-binding: verify method, locate implementation, perform boxing, dispatch call 
            float r = (float) scheme.invoke(policy, p, n);
            double emi = LoanHelper.monthlyInstallment(p, n, r);
            System.out.printf("%-6d%16.2f%n", n, emi);
        }
    }
}
