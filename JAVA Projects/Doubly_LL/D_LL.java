package Doubly_LL;
public class D_LL {
    public static class Node{
        public int val;
        public Node next;
        public Node prev;
        public Node(int val){
            this.val = val;
        }
    }
    public static void print_ll(Node head){
        Node temp = head;
        while(temp.next != null){
            System.out.println(temp.val);
            temp = temp.next;
        }
    }
    public static Node create_ll(){
        Node head = new Node(0);
        Node temp = head;
        for (int i = 1 ; i < 5 ;i++){
            temp.next = new Node(i);
            temp.next.prev = temp;
            temp = temp.next;
        }
        return head;
    }
    public static void main(String[] args){
        Node head = create_ll();
        print_ll(head);
    }
}
