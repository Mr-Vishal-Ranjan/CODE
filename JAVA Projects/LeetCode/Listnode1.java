package LeetCode;

import java.util.List;

public class Listnode1 {
    public static class ListNode {
        int val;
        ListNode next;

        ListNode() {
        }

        ListNode(int val) {
            this.val = val;
        }

        ListNode(int val, ListNode next) {
            this.val = val;
            this.next = next;
        }
    }


    public static ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int sum=0;
        ListNode Head ;
        ListNode Node = new ListNode();
        Head=Node;
        while (l1 != null || l2 != null||sum !=0) {
            if(l1!=null){
                sum=sum+l1.val;
                l1=l1.next;
            }
            if(l2!=null){
                sum=sum+l2.val;
                l2=l2.next;
            }
            Node.val=sum%10;
            sum/=10;
            if(l1 == null && l2 == null && sum ==0)break;
            Node.next=new ListNode();
            Node=Node.next;
        }
        return Head;
    }
    public static void main(String[] args) {
        ListNode l1 = new ListNode(1);
        l1.next=new ListNode(9);
        l1.next.next=new ListNode(9);
        l1.next.next.next=new ListNode(9);
        l1.next.next.next.next=new ListNode(9);
        l1.next.next.next.next.next=new ListNode(9);
        l1.next.next.next.next.next.next=new ListNode(9);
        l1.next.next.next.next.next.next.next=new ListNode(9);
        l1.next.next.next.next.next.next.next.next=new ListNode(9);
        l1.next.next.next.next.next.next.next.next.next=new ListNode(9);

        ListNode l2 = new ListNode(9);
//        l2.next=new ListNode(6);
//        l2.next.next=new ListNode(4);

        ListNode Final =  addTwoNumbers(l1,l2);
        ListNode Temp = Final;

    }
}
