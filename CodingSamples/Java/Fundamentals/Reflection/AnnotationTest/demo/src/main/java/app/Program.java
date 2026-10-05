package app;

import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.reflect.Method;

import finance.LoanHelper;
import finance.Marginal;
import finance.MaxDuration;

public class Program {
    
    public static void main(String[] args) throws Throwable {
        double p = Double.parseDouble(args[0]);
        Class<?> c = Class.forName("finance.policies." + args[1] + "Loan");
        Object policy = c.getConstructor().newInstance();
        Method scheme = c.getMethod(args.length > 2 ? args[2] : "common", double.class, int.class);
        double dp = c.isAnnotationPresent(Marginal.class) ? 0.2 * p : 0;
        p -= dp;
        MaxDuration md = scheme.getAnnotation(MaxDuration.class);
        int m = md != null ? md.value() : 10;
        //a method-handle holds a direct type reference to 
        //implementation of a specific method
        MethodHandle mh = MethodHandles.lookup()
            .unreflect(scheme)
            .bindTo(policy); //verify method, locate implementation
        for(int n = 1; n <= m; ++n) {
            float r = (float) mh.invokeExact(p, n); //dispatch call
            double emi = LoanHelper.monthlyInstallment(p, n, r);
            System.out.printf("%-6d%16.2f%n", n, emi);
        }
        System.out.println("--------------------------");
        System.out.printf("Down Payment: %.2f%n", dp);
    }
}
