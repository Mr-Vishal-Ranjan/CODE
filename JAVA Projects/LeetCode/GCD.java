package LeetCode;

public class GCD {
    public static int calcGCD(int n, int m){
        int  divisor,divident,remainder;
        if(n>m){
            divisor = m;
            divident = n;
        }else{
            divisor = n;
            divident = m;
        }
        remainder=divident%divisor;
        if(remainder!=0){
            return calcGCD(remainder,divisor);
        }else return divisor;
    }
    public static void main(String[] args) {
        int n=9,m=6;
        System.out.println(calcGCD(n,m));
    }
}
