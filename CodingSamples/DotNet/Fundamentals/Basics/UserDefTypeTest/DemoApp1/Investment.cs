struct Investment
{
    //instance field - each instance receives its own separate value
    private double installment;

    private int years;

    private bool risk;

    //constructor for initializing instance fields
    public Investment(double amount, int count)
    {
        installment = amount;
        years = count;
        risk = false;
    }

    //instance method - a method declared without static modifier must be 
    //called on an indentifier of an instance of type in which it is defined,
    //in body of such a method 'this' keyword can be used to refer to the
    //instance on which the method is called
    public void AllowRisk(bool yes)
    {
        this.risk = yes; //explicit usage of this
    }

    public double TotalPayment()
    {
        return years * installment; //implicit usage of this
    }

    public double FutureValue()
    {
        float i = risk ? 0.08f : 0.06f;
        return (installment / i) * (Math.Pow(1 + i, years) - 1);
    }
}