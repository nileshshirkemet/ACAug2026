//importing name Employee from payroll package
//so that it is expanded to payroll.Employee
//at compile time
import payroll.Employee;
import payroll.SalesPerson;

class Program {

    private static double tax(Employee emp) {
        double amount = emp.income();
        return amount > 10000 ? 0.15 * (amount - 10000) : 0;
    }

    private static double bonus(Employee emp) {
        if(emp instanceof SalesPerson)
            return 0;
        return 25 * emp.getHourlyRate();
    }

    public static void main(String[] args) {
        Employee jack = new Employee();
        jack.setWorkHours(186);
        jack.setHourlyRate(52);
        System.out.printf("Jack's Income is %.2f, Tax is %.2f and Bonus is %.2f%n", jack.income(), tax(jack), bonus(jack));
        SalesPerson jill = new SalesPerson(186, 52, 64000);
        System.out.printf("Jill's Income is %.2f, Tax is %.2f and Bonus is %.2f%n", jill.income(), tax(jill), bonus(jill));
    }
}
