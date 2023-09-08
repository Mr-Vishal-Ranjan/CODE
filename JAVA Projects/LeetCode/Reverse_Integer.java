package LeetCode;

public class Reverse_Integer {
    public static int reverse(int x) {
        int rev = 0,check=0;
        if(x<0)check++;
        while(x!=0){
            rev*=10;
            rev+=(x%10);
            x/=10;
        }
        return rev;
    }
    public static void main(String[] args) {
        int x = -123;
        System.out.println(reverse(x));
    }
}
