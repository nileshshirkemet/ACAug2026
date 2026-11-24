using System;

class Investment
{
    //a method declared with 'static' qualifier must be called directly
    //on the type in which it is defined
    //optional parameters can appear at end of the parameter list with
    //each parameter initialized with a constant expression which is
    //passed as its default argument
    public static double FutureValue(double installment, int years, bool risk = true)
    {
        float i = risk ? 0.08f : 0.06f;
        return (installment / i) * (Math.Pow(1 + i, years) - 1); 
    }
}