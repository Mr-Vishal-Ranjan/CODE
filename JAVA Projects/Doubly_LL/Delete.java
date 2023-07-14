package Doubly_LL;

public class Delete {
    public static D_LL.Node delete(D_LL.Node head,int x){
        D_LL.Node temp = head;
        while(temp.next != null){
            if(head.val == x){
               head = temp.next;
               head.prev = null;
            } else if(temp.val >= x){
                temp.next.prev = temp.prev;
                temp.prev.next = temp.next;
            }
            temp = temp.next;
        }
        return head;
    }
    public static void main(String[] args){
        D_LL.Node head = D_LL.create_ll();
        head = delete(head,3);
        D_LL.print_ll(head);
    }
}

