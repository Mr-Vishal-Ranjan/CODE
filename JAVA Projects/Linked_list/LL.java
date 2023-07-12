package Linked_list;

public class LL {
    public static class Node {
        public int val;
        public Node next;
        public Node(int val) {this.val = val;}
    }
    public static Node create_ll() {
        Node head;
        Node temp = new Node(0);
        head = temp;
        for (int i = 1; i < 5; i++) {
            temp.next = new Node(i);
            temp = temp.next;
        }
        return head;
    }
    public static void print_ll(Node head) {
        Node temp = head;
        for (int i = 0; i < 5; i++) {
            System.out.println(temp.val);
            temp = temp.next;
        }
    }
    public static void swap(Node temp) {
        temp.next.val = temp.next.val + temp.val;
        temp.val = temp.next.val - temp.val;
        temp.next.val = temp.next.val - temp.val;
    }

    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 5};
        Node head;
        Node temp = new Node(array[0]);
        head = temp;
        for (int i = 1; i < 5; i++) {
            temp.next = new Node(array[i]);
            temp = temp.next;

//            temp = t;
//            Node temp1;
//            temp1 = new Node(array[i]);
//            temp.next = temp1;
//            if(i < array.length) {
//                temp = new Node(array[i + 1]);
//                i++;
//                temp1.next = temp;
//            }
        }
        Node temp1 = head;
        while(temp1 != null){
            System.out.println(temp1.val);
            temp1 = temp1.next;
        }
    }
}
