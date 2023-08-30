package Queue;

public class Queue {
    private int size = 2;
    private int[] arr= new int[size];
    private int insert = 0;
    public void enqueue(int value){
        arr[insert] = value;
        insert++;
    }
    public void dequeue(){
        for(int i=1;i<insert;i++){
            arr[i-1]=arr[i];
        }
        insert--;
        arr[insert]=0;
    }
    public int first_value(){
        return arr[0];
    }
    public int last_value(){
        return arr[insert-1];
    }
    public int peek(int position){
        return arr[position];
    }
    public boolean isEmpty(){
        return insert == 0;
    }
    public boolean isfull(){
        return insert == size;
    }
}
