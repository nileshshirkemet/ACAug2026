namespace Payroll
{
    class Employee
    {
        private int hours;

        private float rate;

        //parameterized constructor
        public Employee(int h, float r)
        {
            hours = h;
            rate = r;
        }

        //parameterless constructor
        public Employee() : this(0, 50)
        {
        }

        //property - a member that behaves like a public field but 
        //internally implements get/set methods to provide access
        //to a value associated with the object
        public int WorkHours
        {
            get
            {
                return hours;
            }

            set
            {
                hours = value;
            }
        }

        public float HourlyRate
        {
            get { return rate; }
            set { rate = value; }
        }

        //read-only property
        public int WorkDays
        {
            get { return hours / 8; }
        }

        //a method declared with 'virtual' modifier 
        //can be overridden in the derived class
        public virtual double Income()
        {
            double amount = hours * rate;
            int ot = hours - 180;
            if(ot > 0)
                amount += 50 * ot;
            return amount;
        }
    }
}