//generic class with E as type-parameter
public class SimpleStack<E> {
    
    //inner member class
    class Node {
        E value;
        Node below = top; //referring to member of outer class
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

}
