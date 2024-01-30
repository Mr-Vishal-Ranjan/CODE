package LeetCode;

public class LCP {
    public static String longestCommonPrefix(String[] strs) {
        String s="";

        for(int i=0;i<strs[0].length();i++){
            for(int j=0;j<strs.length;j++){
                char x=strs[0].charAt(i);
                if(i<strs[j].length() && strs[j].charAt(i) == x){
                    if(j==strs.length-1){
                        s=s+x;
                    }
                }else return s;
            }
        }
        return s;
    }

    public static void main(String[] args) {
        String[] str = {"a"};
        System.out.print(longestCommonPrefix(str));
    }
}
