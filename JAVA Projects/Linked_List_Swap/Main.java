package Linked_List_Swap;

import Linked_List_Rev.LLReverse;

public class Main {
    public static class Node {
        public int val;
        public Node next;
        public Node(int val) {
            this.val = val;
        }
    }
    public static Node create_ll(){
        Node head;
        Node temp = new Node(0);
        head = temp;
        for (int i = 1 ;i < 5;i++){
            temp.next = new Node(i);
            temp = temp.next;
        }
        return head;
    }
    public static void print_ll(Node head){
        Node temp = head;
        for (int i = 0;i < 5;i++){
            System.out.println(temp.val);
            temp = temp.next;
        }
    }
    public static void main(String[] args){
        Node head = create_ll();
        Node temp = head;
        for (int i = 0;i<5;i++){
            temp = temp.next;
            if (i == 1){
                swap(temp);
            }
        }
        print_ll(head);
    }

    private static void swap(Node temp) {
        temp.next.val = temp.next.val + temp.val;
        temp.val = temp.next.val - temp.val;
        temp.next.val = temp.next.val - temp.val;
    }
}
