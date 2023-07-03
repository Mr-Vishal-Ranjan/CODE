package Linklist;

public class Main {

    public static class Node {

        public Node prev; // This is for doubly LL
        public int val;
        public Node next;

        public Node(int val) {
            this.val = val;
        }

    }

    public static void main(String[] args) {
        Node head;
        Node firstNode = new Node(1);
        head = firstNode;
        Node secondNode = new Node(2);
        firstNode.next = secondNode;
        Node thirdNode = new Node(3);
        secondNode.next = thirdNode;
        //Node temp = head;
        print(head);
    }

    private static void print(Node head) {
        Node temp = head;
        while(temp != null) {
            System.out.println(temp.val);
            temp = temp.next;
        }
    }


}
