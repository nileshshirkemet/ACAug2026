import java.util.*;

class Program {

    public static void main(String[] args) {
        if(args.length == 0){
            //var store = new ArrayList<Interval>();
            //var store = new LinkedList<Interval>();
            //var store = new HashSet<Interval>();
            var store = new TreeSet<Interval>();
            store.add(new Interval(4, 31));
            store.add(new Interval(6, 12));
            store.add(new Interval(3, 43));
            store.add(new Interval(7, 24));
            store.add(new Interval(5, 55));
            store.add(new Interval(2, 151));
            for(var entry : store)
                System.out.println(entry);
        }else{
            //var store = new HashMap<String, Interval>();
            var store = new TreeMap<String, Interval>();
            store.put("monday", new Interval(4, 31));
            store.put("tuesday", new Interval(6, 12));
            store.put("wednesday", new Interval(3, 43));
            store.put("thursday", new Interval(7, 24));
            store.put("friday", new Interval(5, 55));
            store.put("monday", new Interval(2, 31));
            Interval val = store.get(args[0]);
            if(val != null)
                System.out.printf("Value = %s%n", val);
            else{
                for(var entry : store.entrySet()){
                    System.out.printf("%-12s%10s%n", entry.getKey(), entry.getValue());
                }
            }
        }
    }
}
