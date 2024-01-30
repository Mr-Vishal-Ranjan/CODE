package LeetCode;

public class REv_String {
    public static boolean rotateString(String s, String goal) {
        return (s.length()==goal.length() && (s+s).contains(goal));
    }

    public static void main(String[] args) {
        String s= "abcde";
        String goal="cdeab";

        System.out.print(rotateString(s,goal));
    }
}
