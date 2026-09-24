class Interval implements Comparable<Interval> {
    
    private int min;

    private int sec;

    public Interval(int m, int s) {
        min = m + s / 60;
        sec = s % 60;
    }

    public int minutes() {
        return min;
    }

    public int seconds() {
        return sec;
    }
    
    public int time() {
        return 60 * min + sec;
    }

    public String toString() {
        if(sec < 10)
            return min + ":0" + sec;
        return min + ":" + sec;
    }

    public int hashCode() {
        return min + sec;
    }

    public boolean equals(Object that) {
        if(that instanceof Interval){
            Interval other = (Interval) that;
            return min == other.min && sec == other.sec; 
        }
        return false;

    }

    public int compareTo(Interval that) {
        return this.time() - that.time();
    }
}
