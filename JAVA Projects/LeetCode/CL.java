package LeetCode;

public class CL {
    static class Node{
        public int data;

        Node next;

        public Node(int x){
            data=x;
        }

        public Node() {

        }
    }
    public static Node constructLL(int []arr) {
        // Write your code here
        Node temp = new Node();
        Node head = temp;

        for(int i=0; i<arr.length ; i++){
            temp.data=arr[i];
            temp.next= new Node();
            temp=temp.next;
        }
        return head;
    }

    public static void main(String[] args) {
        int[] arr={1,2,3,4,5};
        constructLL(arr);
    }
}
