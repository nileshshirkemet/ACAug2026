class Program {

    public static void main(String[] args) throws Throwable {
        int n = Integer.parseInt(args[0]);
        System.out.print("Computing...");
        var c = new Computation();
        var job = c.computeAsync(1, n)
            .thenAccept(r -> {
                System.out.println("Done!");
                System.out.printf("Result = %d, computed in %.3f seconds.%n", r, c.time());
            });
        while(!job.isDone()){
            System.out.print(".");
            Thread.sleep(500);
        }

    }
}
