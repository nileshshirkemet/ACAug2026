namespace Payroll;

//defining SalesPerson as a derived class of Employee (base class)
class SalesPerson : Employee
{
    //automatic property
    public double Sales { get; set; }

    public SalesPerson(int h, float r, double s) : base(h, r)
    {
        Sales = s;
    }

    //method overridding - defining a method in the derived class
    //whose declaration matches with the declaration of a virtual
    //method in the base class
    public override double Income()
    {
        double amount = base.Income();
        if(Sales >= 25000)
            amount += 0.05 * Sales;
        return amount;
    }
}