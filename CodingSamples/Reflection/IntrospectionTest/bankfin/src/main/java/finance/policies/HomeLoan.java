package finance.policies;

import finance.OpenPolicy;

public class HomeLoan implements OpenPolicy {
    
    public float common(double amount, int period) {
        return amount < 5000000 ? 8.5f : 8.0f;
    }

    public float welfare(double amount, int period) {
        return 0.6f * common(amount, period);
    }

    public float woman(double amount, int period) {
        return common(amount, period) - 1;
    }
}
