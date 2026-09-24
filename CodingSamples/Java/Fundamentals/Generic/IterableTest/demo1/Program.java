class Program {

    public static void main(String[] args) {
        SimpleStack<String> a = new SimpleStack<String>();
        a.push("Monday");
        a.push("Tuesday");
        a.push("Wednesday");
        a.push("Thursday");
        a.push("Friday");
        for(var i = a.iterator(); i.hasNext();){
            System.out.println(i.next());
        }
        System.out.println("--------------------");
        while(!a.empty())
            System.out.println(a.pop());
        System.out.println("--------------------");
        SimpleStack<Double> b = new SimpleStack<>();
        b.push(5.41);
        b.push(7.32);
        b.push(3.23);
        b.push(6.14);
        for(var d : b){
            System.out.println(d);
        }
    }
}
