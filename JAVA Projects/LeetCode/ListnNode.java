package LeetCode;

public class ListnNode {
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
            ListNode temp = new ListNode();
            //System.out.println(l1.val);
            long num = 0, num2 = 0;
            temp = l1;
            while (temp != null) {
                num = num * 10 + (temp.val);
                temp = temp.next;
            }
            long rev = 0;
            while(num>0){
                rev=rev*10+(num%10);
                num/=10;
            }
            num = rev;
            rev=0;

            temp = l2;
            while (temp != null) {
                num2 = num2 * 10 + (temp.val);
                temp = temp.next;
            }
            while(num2>0){
                rev=rev*10+(num2%10);
                num2/=10;
            }
            num2 = rev;
            num = num + num2;
            ListNode Temp1 = new ListNode();
            ListNode Head;
            Head = Temp1;
            while (num > 0) {
                Temp1.val = (int) (num % 10);
                //System.out.println(Temp1.val);
                num /= 10;
                if(num==0)break;
                Temp1.next = new ListNode();
                Temp1 = Temp1.next;
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
