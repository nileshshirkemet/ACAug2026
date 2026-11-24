global using System;

class Program
{
    static void Advise(ref Investment inv)
    {
        double amount = inv.TotalPayment();
        inv.AllowRisk(amount < 500000);
    }

    //method parameter declared with 'out' qualifier can receive
    //reference to uninitialized data of matching type but such
    //a parameter must be initialized before the method returns
    static bool TryStockMarket(double amount, out Investment inv)
    {
        if(amount >= 100000)
        {
            inv = new Investment(amount, 3);
            inv.AllowRisk(RiskLevel.High);
            return true;
        }
        inv = new Investment();
        return false;
    }

	static void Main(string[] args)
	{
		Console.WriteLine("Welcome Investor!!");
        double p = Convert.ToDouble(args[0]);
        int n = Convert.ToInt32(args[1]);
        Investment myinv = new Investment(p, n);
        Console.WriteLine("Future value of risk-free investment : {0:0.00}", myinv.FutureValue());
        myinv.AllowRisk(true);
        Console.WriteLine("Future value of low-risk investment  : {0:0.00}", myinv.FutureValue());
        Advise(ref myinv); 
        Console.WriteLine("Future value of smart-risk investment: {0:0.00}", myinv.FutureValue());
        if(n == 3 && TryStockMarket(p, out Investment sminv))
            Console.WriteLine("Future value in high-risk investment : {0:0.00}", sminv.FutureValue());
  	}
}

