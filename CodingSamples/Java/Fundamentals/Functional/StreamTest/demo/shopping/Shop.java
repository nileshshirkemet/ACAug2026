package shopping;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;

public class Shop {
    
    private Shop() {}

    public static Item[] fetchItems() {
        return new Item[]{
            new Item("cpu", "intel"),
            new Item("ddr", "samsung"),
            new Item("motherboard", "intel"),
            new Item("cpu", "amd"),
            new Item("mouse", "logitech"),
            new Item("ssd", "samsung"),
            new Item("keyboard", "logitech"),
            new Item("ssd", "seagate"),
            new Item("mouse", "microsoft"),
            new Item("monitor", "samsung"),
            new Item("motherboard", "amd")
        };
    }

    public static Collection<Customer> fetchCustomers() {
        var customers = new ArrayList<Customer>();
        customers.add(new Customer("Pratik", 65000, 3));
        customers.add(new Customer("Akash", 48000, 4));
        customers.add(new Customer("Durgesh", 76000, 4));
        customers.add(new Customer("Nidhi", 84000, 5));
        customers.add(new Customer("Gauri", 26000, 2));
        customers.add(new Customer("Sham", 98000, 5));
        customers.add(new Customer("Vijay", 52000, 3));
        customers.add(new Customer("Komal", 38000, 2));
        customers.add(new Customer("Monish", 66000, 1));
        return customers;
    }

    public static Collection<Distributor> fetchSuppliers() {
        try(var doc = new BufferedReader(new FileReader("suppliers.csv"))){
            return doc.lines()
                .skip(1)
                .map(Distributor::new) //passing method-reference to a constructor
                .toList();
        }catch(IOException e){
            throw new RuntimeException(e);
        }
    }
}
