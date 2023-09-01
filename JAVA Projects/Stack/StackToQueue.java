package Stack;

import Queue.Queue;

public class StackToQueue {
    public static void main(String[] args) {
        StacK s = new StacK();
        Queue q = new Queue();
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        while(s.peek()>0){
            q.enqueue(s.peek());
            s.pop();
        }
    }
}
