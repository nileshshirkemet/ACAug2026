//using directive includes the specified qualifier while resolving
//unqualified type names
using System;

class Program
{
	static void Main()
	{
		Console.WriteLine("Welcome Investor!");
        Console.Write("Number of Years: ");
        int n = Convert.ToInt32(Console.ReadLine());
        Console.Write("Yearly Payment : ");
        double p = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Future value of risk-free investment: {0:0.00}", Investment.FutureValue(p, n, false));
        Console.WriteLine("Future value of low-risk investment:  {0:0.00}", Investment.FutureValue(p, n));
	}
}

