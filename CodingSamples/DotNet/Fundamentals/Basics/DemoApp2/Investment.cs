struct Investment
{
    private double installment;

    private int years;

    private RiskLevel risk;

    public Investment(double amount, int count)
    {
        installment = amount;
        years = count;
        risk = RiskLevel.None;
    }

    public void AllowRisk(bool yes)
    {
        risk = yes ? RiskLevel.Low : RiskLevel.None;
    }

    //method overloading: defining multiple methods in same the type 
    //with identical name but different list of parameter types
    public void AllowRisk(RiskLevel level)
    {
        risk = level;
    }

    public double TotalPayment()
    {
        return years * installment; //implicit usage of this
    }

    public double FutureValue()
    {
        float i;
        switch(risk)
        {
            case RiskLevel.Low:
                i = 0.08f;
                break;
            case RiskLevel.High:
                i = 0.11f;
                break;
            default:
                i = 0.06f;
                break;
        }
        return (installment / i) * (Math.Pow(1 + i, years) - 1);
    }
}