import java.util.Scanner;

class Program {
    
    private static final Scanner input = new Scanner(System.in);

    private static float safeScheme(int time) {
        return time < 5 ? 0.06f : 0.07f;
    }

    private float min;

    public Program(float min) {
        this.min = min;
    }

    private float goldScheme(int time) {
        return min + (time / 3) * 0.005f;
    }

    public static void main(String[] args) {
        System.out.print("Yearly Installment: ");
        double p = input.nextDouble();
        System.out.print("Number of Years   : ");
        int n = input.nextInt();
        var inv = new Investment(p, n);
        System.out.printf("Future value in riskless investment: %.2f%n", inv.futureValue(Program::safeScheme));
        Program app = new Program(0.08f);
        System.out.printf("Future value in riskful investment:  %.2f%n", inv.futureValue(app::goldScheme));
    }
}
