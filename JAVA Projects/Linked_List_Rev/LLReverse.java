package Linked_List_Rev;

public class LLReverse {
    public static class Node {
        public int val;
        public Node next;

        public Node(int val) {
            this.val = val;
        }
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
    public static void LL_reverse(Node head) {
        for (int i = 0; i < 5; i++) {
            Node temp = head;
            for (int j = 0; j < 5 - i - 1; j++) {
                swap(temp);
                temp = temp.next;
            }
        }
    }
    public static void main(String[] args) {
        Node head = create_ll();
        LL_reverse(head);
        print_ll(head);
    }
}