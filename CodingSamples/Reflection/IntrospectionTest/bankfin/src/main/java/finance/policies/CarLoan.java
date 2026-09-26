package finance.policies;

public class CarLoan extends PersonalLoan {
    
    public float common(double amount, int period) {
        return (amount > 750000 ? 12 : 11) + (period < 5 ? 0 : 0.5f);
    }
}
