class Investment {

    //static method - is a method defined in a class with static
    //modifier so that it can be directly called on the class,
    //such a method can only reference other static members of
    //its class
    public static double futureValue(double installment, int years) {
        float i = 0.06f;
        return (installment / i) * (Math.pow(1 + i, years) - 1);
    }
}
