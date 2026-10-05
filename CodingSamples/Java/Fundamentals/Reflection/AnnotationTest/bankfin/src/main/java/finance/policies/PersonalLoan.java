package finance.policies;

import finance.Marginal;
import finance.MaxDuration;
import finance.OpenPolicy;

@Marginal 
public class PersonalLoan implements OpenPolicy {
    
    @MaxDuration(6)
    public float common(double amount, int period) {
        return 10 + 0.5f * (period / 3);
    }

    public float employee(double amount, int period) {
        return common(amount, period) - 3;
    }
}
