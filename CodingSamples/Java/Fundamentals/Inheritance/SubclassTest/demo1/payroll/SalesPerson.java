package payroll;

//defining SalesPerson as a subclass of
//Employee (superclass)
public class SalesPerson extends Employee {
    
    private double sales;

    public SalesPerson(int h, float r, double s) {
        super(h, r);
        sales = s;
    }

    public double getSales() {
        return sales;
    }

    public void setSales(double value) {
        sales = value;
    }

    //method overriding - defining a method in subclass whose
    //return type, name and list of parameter types match
    //with a method in its superclass
    public double income() {
        double payment = super.income();
        if(sales >= 25000)
            payment += 0.05 * sales;
        return payment;
    }
}
