package shopping;

public record Customer(String id, double purchase, int rating) implements Comparable<Customer> {
    
    public String stars() {
        return "*".repeat(rating);
    }

    public int compareTo(Customer that) {
        return id.compareTo(that.id);
    }
}
