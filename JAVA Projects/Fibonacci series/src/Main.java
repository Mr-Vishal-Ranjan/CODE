public class Main {
    public static void main(String[] args) {
        int x = 0 , y = 1;
        System.out.print("First ten Fibonacci Series number:-\n"+x+" "+y);

        for(int i = 2; i < 10;i++){
            int temp = x + y;
            System.out.print(" "+temp);
            x = y;
            y = temp;
        }
    }
}