package Stack;

public class StacK {
    private int size = 5;
    private int[] arr = new int[size];
    private int top = -1;

    public void push(int value) {
        top++;
        arr[top] = value;
    }

    public void pop() {
        arr[top] = 0;
        top--;
    }
    public int peek() {
        if (top>=0)
        return arr[top];
        else return -1;
    }

    public boolean isEmpty() {
        return top <= -1;
    }

    public boolean isFull() {
        return top >= size - 1;
    }

}
