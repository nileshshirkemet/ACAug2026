using Payroll;

class Program
{
    static void Appraise(Employee emp)
    {
        if(emp.WorkDays >= 20)
            emp.HourlyRate *= 1.04f;
    }

    static double Tax(Employee emp)
    {
        double i = emp.Income();
        return i > 10000 ? 0.15 * (i - 10000) : 0;
    }

    static double Bonus(Employee emp)
    {
        if(emp is SalesPerson)
            return 0;
        return 25 * emp.HourlyRate;
    }

    //Type T? represents nullable form of non-nullable type T
    static Employee? Recruit(int experience)
    {
        if(experience > 2)
            return new Employee(175, 20 * experience);
        return null;
    }

    static void Main(string[] args)
    {
        Employee jack = new Employee();
        jack.WorkHours = 186; //jack.set_WorkHours(186)
        Appraise(jack);
        Console.WriteLine("Jack's Income is {0:0.00}, Tax is {1:0.00} and Bonus is {2:0.00}", jack.Income(), Tax(jack), Bonus(jack));
        SalesPerson jill = new SalesPerson(186, 52, 64000);
        Console.WriteLine("Jill's Income is {0:0.00}, Tax is {1:0.00} and Bonus is {2:0.00}", jill.Income(), Tax(jill), Bonus(jill));
        if(args.Length > 0)
        {
            int exp = int.Parse(args[0]);
            Employee? john = Recruit(exp);
            if(john != null)
                Console.WriteLine("Recruited John with Income of {0:0.00}", john.Income());
        }
    }
}
