import java.util.Iterator;

public class SimpleStack<E> implements Iterable<E> {
    
    class Node {
        E value;
        Node below = top; 
    }

    private Node top;

    public void push(E item) {
        Node node = new Node();
        node.value = item;
        top = node;
    }

    public E pop() {
        E item = top.value;
        top = top.below;
        return item;
    }

    public boolean empty() {
        return top == null;
    }

    public Iterator<E> iterator() {
        //returning an instance of an inner local anonymous class
        //which implements Iterator<E> interface
        return new Iterator<E>(){

            private Node current = top;

            public boolean hasNext() {
                return current != null;
            }

            public E next() {
                E result = current.value;
                current = current.below;
                return result;
            }
        };
    }

}
