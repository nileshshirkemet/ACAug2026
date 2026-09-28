public class JointAccount {
    
    private long balance;

    public long balance() {
        return balance;
    }

    public boolean withdraw(long amount) {
        boolean success = false;
        //to execute a synchronized block a thread must
        //acquire ownership of the monitor associated
        //with the this object
        synchronized(this){
            if(balance >= amount){
                balance = work(balance, amount, -1);
                success = true;
            }
        }//the thread that owns the monitor of this object releases it
        return success;
    }

    public synchronized boolean withdrawAfterDeposit(long amount) throws InterruptedException {
        //release ownership of the monitor of this object and wait 
        //for another thread to notify this monitor and then reaquire
        //the ownership
        this.wait();
        return withdraw(amount);
    }

    public synchronized void deposit(long amount) {
        balance = work(balance, amount, 1);
        //notify monitor of this object so that any thread waiting
        //on this monitor can resume
        this.notify();
    }

    private static long work(long bal, long amt, int sgn) {
        try{
            Thread.sleep(amt / 100);
        }catch(InterruptedException e){}
        return bal + amt * sgn;
    }
}
