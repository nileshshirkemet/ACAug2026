package shopping;

public record Distributor(String name, String item, int quantity) {
    
    public Distributor(String row) {
        String[] columns = row.split(",");
        this(
            columns[0],
            columns[1],
            Integer.parseInt(columns[2])
        );
    }
}
