package finance;

public class LoanHelper {
   
    public static double monthlyInstallment(double loan, int years, float rate) {
        float i = rate / 1200;
        int m = 12 * years;
        return loan * i / (1 - Math.pow(1 + i, -m));
    }
}
