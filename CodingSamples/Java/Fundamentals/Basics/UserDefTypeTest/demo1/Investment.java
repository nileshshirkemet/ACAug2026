class Investment {

    //instance field - each instance receives its own separate value
    private double installment;

    private int years;

    private boolean risk;

    //constructor - a special method called during instantiation
    //of a class, for a class that does not explicitly define a 
    //constructor, a parameterless constructor is implicitly defined
    public Investment(double amount, int period) {
        installment = amount;
        years = period;
        risk = false;
    }

    //instance method - is a method defined in a class that
    //can only called on an object of the class which can
    //be referenced from the body of the method using 'this'
    //keyword and therefore such a method can reference 
    //any other member of the class
    public void allowRisk(boolean yes) {
        risk = yes;
    }

    public double totalPayment() {
        return installment * years;
    }

    public double futureValue() {
        float i = risk ? 0.08f : 0.06f;
        return (installment / i) * (Math.pow(1 + i, years) - 1);
    }
}
