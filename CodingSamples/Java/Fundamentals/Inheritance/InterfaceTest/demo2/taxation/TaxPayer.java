package taxation;

public interface TaxPayer {
    
    double TAX_FREE = 120000;

    double annualIncome();

    default double incomeTax() {
        double i = annualIncome();
        return i > TAX_FREE ? 0.15 * (i - TAX_FREE) : 0;
    }
}
