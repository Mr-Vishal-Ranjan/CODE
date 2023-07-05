package Linked_list;

public class Main {
    public static class Node {
        public int val;
        public Node next;
        public Node(int val) {this.val = val;}
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
