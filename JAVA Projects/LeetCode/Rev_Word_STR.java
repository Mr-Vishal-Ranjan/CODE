package LeetCode;

public class Rev_Word_STR {
    public static String reverseWords(String s) {
        String v = "";
        int l=0,r=0;

        for(int i=s.length()-1;i>=0;i--){
            while(i>=0 && s.charAt(i)==' '){i--;}
            if(i>=0 && s.charAt(i)!=' '){r=i;}
            while(i>=0 && s.charAt(i)!=' '){
                i--;
                l=i+1;
            }
            if(l>=0 && r<s.length()){
                v = v + s.substring(l,r+1) + '-';
                r=s.length()+1;
            }
        }
        return v.substring(0,v.length()-1);
    }

    public static void main(String[] args) {
        String s="  hello hgjhgh     ";
        System.out.print(reverseWords(s));
    }
}
