package LeetCode;

public class Plindrome_inString {
    public static String longestPalindrome(String s) {
        int x=0,y=0,a=0,b=0;int i=0,j=0;
        for( j=0;j<s.length();j++){
            for( i=j+1;i<s.length();i++){
                if(i!=j&&s.charAt(j)==s.charAt(i)){
                    x=j;y=i;
                }
            }
            if(y-x>a-b){
                a=x;b=y;
                j=i;
            }
        }
        x=a;y=b;
        for(;a<=b;a++,b--){
            if(s.charAt(a)!=s.charAt(b))break;;
        }
        String v=s.substring(0,1);
        if(a==y&&b==x){
            v = s.substring(x,y+1);
        }
        return v;
    }
    public static void main(String[] args) {
        String s="ccc";
        longestPalindrome(s);
    }
}
