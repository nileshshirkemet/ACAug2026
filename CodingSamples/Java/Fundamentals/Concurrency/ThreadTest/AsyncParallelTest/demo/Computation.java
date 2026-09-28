import java.util.concurrent.CompletableFuture;
import java.util.stream.IntStream;

public class Computation {
    
    private long start;

    private static long work(int count) {
        try{
            Thread.sleep(100 * count);
        }catch(InterruptedException e){}
        return count * count;
    }

    public long compute(int first, int last) {
        start = System.nanoTime();
        return IntStream.range(first, last + 1)
            .parallel() //split incoming stream into separate substreams
            .mapToLong(Computation::work)
            .sum();
    }

    public CompletableFuture<Long> computeAsync(int first, int last) {
        //the evaluation of the supplied expression is delegated to 
        //a worker thread (from fork-join pool) allowing the caller
        //thread to continue and get the result of evaluation at
        //a time in future after the evaluation is completed by
        //the worker
        return CompletableFuture.supplyAsync(() -> compute(first, last));
    }

    public double time() {
        long stop = System.nanoTime();
        return (stop - start) / 1e9;
    }
}
