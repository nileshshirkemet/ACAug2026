import java.util.Scanner;

class Program {
    
    private static final Scanner input = new Scanner(System.in);

    //nested (static) member class
    static class SafeScheme implements Interest {

        public float forPeriod(int time) {
            return time < 5 ? 0.06f : 0.07f;
        }
    }

    public static void main(String[] args) {
        System.out.print("Yearly Installment: ");
        double p = input.nextDouble();
        System.out.print("Number of Years   : ");
        int n = input.nextInt();
        var inv = new Investment(p, n);
        System.out.printf("Future value in riskless investment: %.2f%n", inv.futureValue(new Program.SafeScheme()));
        float m = 0.08f; //this variable is captured in the inner class so it is effectively final
        System.out.printf("Future value in riskful investment : %.2f%n", inv.futureValue(new Interest(){
            public float forPeriod(int y) {
                return  m + (y / 3) * 0.005f;
            }
        }));
    }
}
