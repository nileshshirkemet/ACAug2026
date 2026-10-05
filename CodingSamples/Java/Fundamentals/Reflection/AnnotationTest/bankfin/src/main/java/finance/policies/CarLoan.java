package finance.policies;

public class CarLoan extends PersonalLoan {
    
    //annotation with SOURCE retention policy, applied
    //ensure proper overriding at compile-time
    @Override
    public float common(double amount, int period) {
        return (amount > 750000 ? 12 : 11) + (period < 5 ? 0 : 0.5f);
    }
}
