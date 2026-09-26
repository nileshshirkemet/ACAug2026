package finance.policies;

import finance.OpenPolicy;

public class PersonalLoan implements OpenPolicy {
    
    public float common(double amount, int period) {
        return 10 + 0.5f * (period / 3);
    }

    public float employee(double amount, int period) {
        return common(amount, period) - 3;
    }
}
