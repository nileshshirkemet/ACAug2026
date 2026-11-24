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

    static void Main()
    {
        Employee jack = new Employee();
        jack.WorkHours = 186; //jack.set_WorkHours(186)
        Appraise(jack);
        Console.WriteLine("Jack's Income is {0:0.00}, Tax is {1:0.00}", jack.Income(), Tax(jack));
        SalesPerson jill = new SalesPerson(186, 52, 64000);
        Console.WriteLine("Jill's Income is {0:0.00}, Tax is {1:0.00}", jill.Income(), Tax(jill));
    }
}
