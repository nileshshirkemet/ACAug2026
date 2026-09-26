package shopping;

public class Shop {
    
    private Shop() {}

    public static Item popularItem() {
        return new Item("cpu", "intel", 100);
    }

    public static Customer bestCustomer() {
        return new Customer("Jack", 100000, 5);
    }
}
