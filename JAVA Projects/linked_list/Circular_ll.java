package linked_list;

public class Circular_ll {
    public static void main(String[] args) {
        Doubly_ll.Node head = new Doubly_ll.Node();
        head.SetValue(1);
        head.next = new Doubly_ll.Node();
        head.next.SetValue(2);
        head.next.next = new Doubly_ll.Node();
        head.next.next = head;
        head.next.previous = new Doubly_ll.Node();
        head.next.previous = head;
        head.previous = new Doubly_ll.Node();
        head.previous = head.next;
    }
}
