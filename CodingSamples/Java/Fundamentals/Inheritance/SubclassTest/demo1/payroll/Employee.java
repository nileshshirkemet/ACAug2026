package payroll;

public class Employee {
    
    private int hours;

    private float rate;

    public Employee(int h, float r) {
        hours = h;
        rate = r;
    }

    public Employee() {
        this(0, 50); //calling another constructor
    }

    //getter for workHours property
    public int getWorkHours() {
        return hours;
    }

    //setter for workHours property
    public void setWorkHours(int value) {
        hours = value;
    }

    public float getHourlyRate() {
        return rate;
    }

    public void setHourlyRate(float value) {
        rate = value;
    }

    //getter for read-only workDays property
    public int getWorkDays() {
        return hours / 8;
    }

    public double income() {
        double payment = hours * rate;
        int ot = hours - 180;
        if(ot > 0)
            payment += 50 * ot;
        return payment;
    }
}
