class Program {
    
    //a generic method with T as type-parameter
    private static <T> T select(int choice, T first, T second) {
        if((choice % 2) == 1)
            return first;
        return second;
    }

    private static <T extends Comparable<T>> T select(T first, T second) {
        if(first.compareTo(second) > 0)
            return first;
        return second;
    }

    public static void main(String[] args) {
        if(args.length > 0){
            int s = Integer.parseInt(args[0]);
            String ss = select(s, "Monday", "Tuesday");
            System.out.printf("Selected String = %s%n", ss);
            double sd = select(s, 6.75, 4.25);
            System.out.printf("Selected double = %s%n", sd);
            //String ssd = select(s, "Friday", 3.5);
        }else{
            String ss = select("Monday", "Tuesday");
            System.out.printf("Selected String = %s%n", ss);
            double sd = select(6.75, 4.25);
            System.out.printf("Selected double = %s%n", sd);  
            Interval si = select(new Interval(3, 45), new Interval(5, 30));
            System.out.printf("Selected Interval = %s%n", si);         
        }
    }
}
