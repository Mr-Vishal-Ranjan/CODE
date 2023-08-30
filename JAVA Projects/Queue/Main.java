package Queue;

public class Main {
    public static void main(String[] args) {
        Queue q1=new Queue();
        q1.enqueue(0);
        q1.enqueue(1);
        q1.dequeue();
        System.out.println(q1.first_value());
        System.out.println(q1.last_value());
        System.out.println(q1.isfull());
        System.out.println(q1.isEmpty());
    }
}
