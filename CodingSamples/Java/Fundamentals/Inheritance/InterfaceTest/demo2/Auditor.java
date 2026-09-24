import java.util.Date;

import taxation.TaxPayer;

class Auditor implements AutoCloseable {

    public Auditor() {
        System.out.printf("Auditor[%s] - opening audit session...%n", new Date());
    }
    
    public void audit(String id, TaxPayer target) {
        if(id.length() < 4)
            throw new IllegalArgumentException("Invalid ID");
        double payment = target.incomeTax() + 500;
        System.out.printf("Total tax payment: %.2f%n", payment);
    }

    public void close() {
        System.out.printf("Auditor[%s] - closing audit session...%n", new Date());
    }

}
