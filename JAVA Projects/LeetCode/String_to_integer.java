package LeetCode;

public class String_to_integer {
    public static int myAtoi(String s) {
        long sum=0;int check=1,x=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='+'||s.charAt(i)==' '||s.charAt(i)=='-'||((int)s.charAt(i)>47)&&((int)s.charAt(i)<58)){
            int temp=(int)s.charAt(i)-48;
            if(s.charAt(i)=='-')check=-1;
            if(x != 0 && s.charAt(x-1)==' ')return 0;
            if(temp>=0 && temp<=9){
                sum*=10;
                sum+=temp;
                x=i;
            }}  else break;
        }
        sum*=check;
        if (sum > Integer.MAX_VALUE ) {
            return Integer.MAX_VALUE - 1;
        }else if(sum < Integer.MIN_VALUE ){
            return Integer.MIN_VALUE;
        }else {
            return (int) sum;
        }
    }

    public static void main(String[] args) {
        String s = ".2";
        System.out.println(myAtoi(s));
    }
}
