package finance.policies;

import finance.MaxDuration;
import finance.OpenPolicy;

public class EducationLoan implements OpenPolicy {
    
    @MaxDuration
    public float common(double amount, int period) {
        return 6.0f;
    }

    public float merit(double amount, int period) {
        return 4.0f;
    }
}
