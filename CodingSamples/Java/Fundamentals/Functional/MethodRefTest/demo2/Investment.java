class Investment {

    private final double installment;

    private final int years;

    public Investment(double installment, int years) {
        this.installment = installment;
        this.years = years;
    }

    public final double installment() {
        return installment;
    }

    public final int years() {
        return years;
    }

    public double futureValue(Interest rate) {
        float i = rate.forPeriod(years);
        return (installment / i) * (Math.pow(1 + i, years) - 1);
    }
}
