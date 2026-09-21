class Investment {

    private double installment;

    private int years;

    private RiskLevel risk;

    public Investment(double amount, int period) {
        installment = amount;
        years = period;
        risk = RiskLevel.NONE;
    }

    public void allowRisk(boolean yes) {
        risk = yes ? RiskLevel.LOW : RiskLevel.NONE;
    }

    //method overloading: defining multiple methods in the
    //same class with identical name but different lists of
    //parameter types
    public void allowRisk(RiskLevel level) {
        risk = level;
    }

    public double totalPayment() {
        return installment * years;
    }

    public double futureValue() {
        float i = 0;
        switch(risk) {
            case LOW:
                i = 0.08f;
                break;
            case HIGH:
                i = 0.11f;
                break;
            default:
                i = 0.06f;
        }
        return (installment / i) * (Math.pow(1 + i, years) - 1);
    }
}
