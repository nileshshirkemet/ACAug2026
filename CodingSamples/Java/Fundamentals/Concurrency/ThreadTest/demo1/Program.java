class Program {

    private static ThreadLocal<String> target = new ThreadLocal<>();

    private static void work(int count) {
        long limit = System.currentTimeMillis() + 1000 * count;
        while(System.currentTimeMillis() < limit);
    }

    private static void handleJob(int jobNo) {
        System.out.printf("Job<%d> accepted for %s by thread<%d>%n", jobNo, target.get(), Thread.currentThread().threadId());
        work(jobNo);
        System.out.printf("Job<%d> finished for %s%n", jobNo, target.get());
    }

    public static void main(String[] args) throws Throwable {
        int n = args.length > 0 ? Integer.parseInt(args[0]) : 1;
        Thread child = new Thread(() -> {
            target.set("server");;
            handleJob(n);
        });
        child.setDaemon(n > 7);
        child.start();
        target.set("client");;
        handleJob(2);
    }
}
