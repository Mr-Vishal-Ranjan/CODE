package LeetCode;

public class Sum0 {
    public static long Sum(long n, long sum) {
        if (n > 0) {
            sum += n;
            n--;
            sum = Sum(n, sum);
        }
        return sum;
    }

    public static long sumFirstN(long n) {
        // Write your code here.
        long sum = 0;
        return Sum(n, sum);
    }

    public static void main(String[] args) {
        System.out.println(sumFirstN(50));
    }
}
