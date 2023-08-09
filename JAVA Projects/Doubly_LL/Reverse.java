package Doubly_LL;
public class Reverse {
    public static D_LL.Node reverse(D_LL.Node head) {
        D_LL.Node temp = head;
        D_LL.Node n;
        D_LL.Node p;
        while (temp != null){
            n = temp.next;
            p = temp.prev;
            temp.prev = n;
            temp.next = p;
            head = temp;
            temp = temp.prev;
        }
        return head;
    }
    public static void main(String[] args) {
        D_LL.Node head = D_LL.create_ll();
        head = reverse(head);
        D_LL.print_ll(head);
    }
}
