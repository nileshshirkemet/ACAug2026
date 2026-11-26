using Banking;

//separate portions of same type can be implemented in different
//source files using 'partial' modifier which is commonly used
//to define additional members for an auto-generated type
partial class Program
{
    //a method can accept variable number of arguments as elements
    //of an array identified by its last parameter declared with
    //'params' qualifier
    static void PayInterest(int months, params Account[] accounts)
    {
        foreach(Account acc in accounts)
        {
            /*
            if(acc is IProfitable p)
                p.AddInterest(months);
            */
            IProfitable p = acc as IProfitable;
            p?.AddInterest(12); //if(p != null) p.AddInterest(12)
        }
    }
}