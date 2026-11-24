//global using is applicable to all source files
//in current project
global using System;

class Program
{
    //a method parameter declared with 'ref' qualifier receives the 
    //reference (verifiable address) to an initialized data of matching
    //type
    static void Advise(ref Investment inv)
    {
        double amount = inv.TotalPayment();
        inv.AllowRisk(amount < 500000);
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
        Advise(ref myinv); //using ref operator to obtain reference to myinv
        Console.WriteLine("Future value of smart-risk investment: {0:0.00}", myinv.FutureValue());
	}
}

