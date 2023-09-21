package LeetCode;

public class Plindrome_Recursion {
    public static boolean isPalindrome(String s) {
        int l = 0, r = s.length() - 1;
        return check(l, r, s);
    }

    public static boolean check(int l, int r, String s) {
        boolean x = true;

        if (l < r) {
            int a = (int) s.charAt(l);
            int b = (int) s.charAt(r);
            if (a >= 97 && a <= 122) {
                a -= 32;
            }
            if (b >= 97 && b <= 122) {
                b -= 32;
            }
            while ((a < 48 || a > 57) && (a < 65 || a > 90) && l < r) {
                l++;
                a = (int) s.charAt(l);
                if (a >= 97 && a <= 122) {
                    a -= 32;
                }
            }
            while ((b < 48 || b > 57) && (b < 65 || b > 90) && r > l) {
                r--;
                b = (int) s.charAt(r);
                if (b >= 97 && b <= 122) {
                    b -= 32;
                }
            }
            if (Math.abs(a - b) == 0) {
                l++;
                r--;
                x = check(l, r, s);
            } else x = false;
        }
        return x;
    }

    public static void main(String[] args) {
        String s = "a.";

        System.out.println(isPalindrome(s));
    }
}
