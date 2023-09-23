package LeetCode;

public class Armstrong {
    public static boolean Check_Armstrong(int num){
        int number=num;
        int temp=num;
        int count=0;
        while(temp!=0){
            temp/=10;
            count++;
        }
        int sum=0,mul;
        while(num!=0){
            mul=1;
            temp=num%10;
            num/=10;
            for (int i = 0;i<count;i++){
                mul*=temp;
            }
            sum+=mul;
        }
        return number == sum;
    }
    public static void main(String[] args) {
        int num=123;
        System.out.print(Check_Armstrong(num));
    }
}
