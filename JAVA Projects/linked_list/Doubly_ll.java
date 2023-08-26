package linked_list;

public class Doubly_ll {
    public static class Node{
        private int value;
        void SetValue(int value){
            this.value = value;
        }
        public Node next;
        public Node previous;
    }

    public static void main(String[] args) {
        Node Head = new Node();
        Head.SetValue(1);
        Head.next = new Node();
        Head.next.SetValue(2);
        Head.next.previous = new Node();
        Head.next.previous=Head;
    }
}
