using Banking;

Banker.OpenBank();
Account jill = Banker.OpenSavingsAccount();
jill.Deposit(15000);
Account jack = Banker.OpenCurrentAccount();
jack.Deposit(30000);
Account john = Banker.OpenSavingsAccount();
john.Deposit(35000);
Console.WriteLine("Jill's Account ID is {0} and opening Balance is {1:0.00}", jill.Id, jill.Balance);
Console.WriteLine("Jack's Account ID is {0} and opening Balance is {1:0.00}", jack.Id, jack.Balance);
Console.WriteLine("John's Account ID is {0} and opening Balance is {1:0.00}", john.Id, john.Balance);
Console.WriteLine("-----------------------------------------------------------");
if(args.Length > 0)
{
    try
    {
        decimal payment = decimal.Parse(args[0]);
        Console.WriteLine("Jill is paying {0:0.00} to Jack...", payment);
        jill.Transfer(payment, jack); //Banker.Transfer(jill, payment, jack);
    }
    catch(InsufficientFundsException)
    {
        Console.WriteLine("Payment failed due to lack of funds");
    }
    catch(Exception ex)
    {
        Console.WriteLine("Error: {0}", ex.Message);
    }
}
else
{
    Console.WriteLine("Paying annual interest...");
    PayInterest(12, jill, jack, john);
}
Console.WriteLine("-----------------------------------------------------------");
Console.WriteLine("Jill's closing Balance: {0:0.00}", jill.Balance);
Console.WriteLine("Jack's closing Balance: {0:0.00}", jack.Balance);
Console.WriteLine("John's closing Balance: {0:0.00}", john.Balance);

