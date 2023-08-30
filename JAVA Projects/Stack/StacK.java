package Stack;

public class StacK {
    private int size = 2;
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
        return arr[top];
    }

    public boolean isEmpty() {
        return top <= -1;
    }

    public boolean isFull() {
        return top >= size - 1;
    }

}
