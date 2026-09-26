package finance.policies;

import finance.OpenPolicy;

public class EducationLoan implements OpenPolicy {
    
    public float common(double amount, int period) {
        return 6.0f;
    }

    public float merit(double amount, int period) {
        return 4.0f;
    }
}
