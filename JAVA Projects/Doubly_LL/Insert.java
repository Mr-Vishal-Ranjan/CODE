package Doubly_LL;
public class Insert {
    public static D_LL.Node insert(D_LL.Node head){
        D_LL.Node temp = head;
        while(temp.next != null){
            if(temp.prev == null){
                head = temp.prev = new D_LL.Node(-1);
                temp.prev.next = temp;
            }
            if(temp.next == null){
                temp.next = new D_LL.Node(4);
                temp.next.prev = temp;
            }
            temp = temp.next;
        }
        return head;
    }
    public static void main(String[] args){
        D_LL.Node head = D_LL.create_ll();
        head = insert(head);
        D_LL.print_ll(head);
    }
}
