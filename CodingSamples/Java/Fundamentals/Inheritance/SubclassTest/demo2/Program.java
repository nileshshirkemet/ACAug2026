class Program {

    private static void show(String label, Object info) {
        System.out.printf("%s = %s%n", label, info.toString());
    }

    public static void main(String[] args) {
        Interval a = new Interval(5, 40);
        Interval b = new Interval(4, 5);
        Interval c = new Interval(3, 160);
        Interval d = b;
        show("Interval a", a);
        show("Interval b", b);
        show("Interval c", c);
        show("Interval d", d);
        System.out.println("----------------------------");
        System.out.printf("a is identical to b: %b%n", a == b);
        System.out.printf("a is identical to c: %b%n", a == c);
        System.out.printf("d is identical to b: %b%n", d == b);
        System.out.println("----------------------------");
        System.out.printf("a is equal to b: %b%n", a.hashCode() == b.hashCode() && a.equals(b));
        System.out.printf("a is equal to c: %b%n", a.hashCode() == c.hashCode() && a.equals(c));
        System.out.printf("d is equal to b: %b%n", d.hashCode() == b.hashCode() && d.equals(b));
    }
}
