import java.util.Arrays;

import shopping.Shop;

class Program {
    
    public static void main(String[] args) {
        switch(args[0]){
            case "items":
                var items = Shop.fetchItems();
                Arrays.stream(items)
                    .filter(i -> i.brand().equals(args[1]))
                    .map(i -> i.name())
                    .forEach(System.out::println);
                break;
            case "customers":
                double min = Double.parseDouble(args[1]);
                var customers = Shop.fetchCustomers();
                customers.stream()
                    .filter(c -> c.purchase() >= min)
                    .sorted()
                    .forEach(c -> System.out.printf("%-16s%5s%n", c.id(), c.stars()));
                break;
            case "suppliers":
                var suppliers = Shop.fetchSuppliers();
                int total = suppliers.stream()
                    .filter(s -> s.item().equals(args[1]))
                    .mapToInt(s -> s.quantity())
                    .sum();
                System.out.printf("Total supply for %s is %d.%n", args[1], total);
                break;
        }
    }
}
