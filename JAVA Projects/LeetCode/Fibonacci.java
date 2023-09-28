package LeetCode;

public class Fibonacci {
    public static int sum(int n,int x,int y){
        int temp;
        if(n!=0){
            if(y==0){
                y++;
                return sum(n-1,x,y);
                //n--;
            }else if(y>0){
                temp=y;
                y=x+y;
                x=temp;
                return sum(n-1,x,y);
                //n--;
            }
        }
        return y;
    }
    public static int fib(int n) {
        int x=0, y=0;
        return sum(n,x,y);
    }

    public static void main(String[] args) {
       System.out.print( fib(3));
    }
}
