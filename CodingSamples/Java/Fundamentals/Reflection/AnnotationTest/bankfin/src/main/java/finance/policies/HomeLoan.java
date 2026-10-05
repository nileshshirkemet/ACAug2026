package finance.policies;

import finance.Marginal;
import finance.MaxDuration;
import finance.OpenPolicy;

@Marginal
public class HomeLoan implements OpenPolicy {
    
    public float common(double amount, int period) {
        return amount < 5000000 ? 8.5f : 8.0f;
    }

    @MaxDuration(value = 12)
    public float welfare(double amount, int period) {
        return 0.6f * common(amount, period);
    }

    public float woman(double amount, int period) {
        return common(amount, period) - 1;
    }
}
