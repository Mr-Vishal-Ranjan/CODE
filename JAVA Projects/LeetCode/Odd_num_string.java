package LeetCode;

public class Odd_num_string {
    public static String largestOddNumber(String num) {
        String v = "";

        for(int i=num.length()-1;i>=0;i--){
            if((int)num.charAt(i)%2!=0){
                v=v+num.substring(0,i+1);
                break;
            }
        }
        return v;
    }

    public static void main(String[] args) {
        String num = "4206";
        largestOddNumber(num);
    }
}
