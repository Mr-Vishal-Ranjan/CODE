package linked_list;

public class Single_ll {
    public static class Node{
        private int value;
        void SetValue(int value){
            this.value = value;
        }
        public Node next;
    }

    public static void main(String[] args) {
        Node head= new Node();
        head.SetValue(1);
        head.next = new Node();
        head.next.SetValue(2);
        head.next.next=new Node();
        head.next.next.SetValue(3);
    }
}
