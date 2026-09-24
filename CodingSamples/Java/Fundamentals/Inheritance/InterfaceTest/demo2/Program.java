import taxation.Supervisor;
import taxation.Worker;

class Program {

    private static void doAuditing(String name, int count) {
        //try-with-resources - can only be applied to
        //an AutoCloseable compatible type
        try(var a = new Auditor()){
            if(count > 10)
                a.audit(name, new Worker(count));
            else
                a.audit(name, new Supervisor(count));
        }//close will be automatically called
    }

    public static void main(String[] args) {
        try{
            String m = args[0].toUpperCase();
            int n = Integer.parseInt(args[1]);
            doAuditing(m, n);
        }catch(Exception e){
            System.out.printf("Error: %s%n", e.getMessage());
        }
    }
}
