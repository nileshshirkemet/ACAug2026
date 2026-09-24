class Program {

    //using wild-card substitution
    private static void show(SimpleStack<?> store) {
        while(!store.empty())
            System.out.println(store.pop());

    }

    public static void main(String[] args) {
        SimpleStack<String> a = new SimpleStack<String>();
        a.push("Monday");
        a.push("Tuesday");
        a.push("Wednesday");
        a.push("Thursday");
        a.push("Friday");
        show(a);
        System.out.println("----------------------");
        SimpleStack<Interval> b = new SimpleStack<>();
        b.push(new Interval(4, 31));
        b.push(new Interval(6, 52));
        b.push(new Interval(3, 43));
        b.push(new Interval(5, 14));
        show(b);
    }
}
