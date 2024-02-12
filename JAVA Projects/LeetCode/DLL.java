package LeetCode;

public class DLL {
    static class Node {
        public int data;
        public Node next;
        public Node prev;

        Node()
        {
            this.data = 0;
            this.next = null;
            this.prev = null;
        }

        Node(int data)
        {
            this.data = data;
            this.next = null;
            this.prev = null;
        }

        Node(int data, Node next, Node prev)
        {
            this.data = data;
            this.next = next;
            this.prev = prev;
        }
    };

    public static Node insertAtTail(Node list, int K) {
        // Write your code here
        Node temp=list;
        while(true){
            if(list == null){
                list = new Node(K);
                return temp;
            }
            list = list.next;
        }
    }

    public static void main(String[] args) {
        Node head=new Node(1);
        head.next=new Node(2);
        insertAtTail(head,3);

    }

}
