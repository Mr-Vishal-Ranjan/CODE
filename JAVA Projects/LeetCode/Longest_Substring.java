package LeetCode;

public class Longest_Substring {
    public static int lengthOfLongestSubstring(String s) {
        int count = 0, f = 0;
        int[] freq = new int[130];
        for (int j = 0; j < s.length(); j++) {
            for (int i = j; i < s.length(); i++) {
                freq[(int) s.charAt(i)]++;
                if (freq[(int) s.charAt(i)] < 2) {
                    count++;
                } else {
                    if (count > f) {
                        f = count;
                    }
                    count = 0;
                    freq = new int[130];
                    break;
                }
                if (count > f) {
                    f = count;
                }
            }
        }
        return f;
    }

    public static void main(String[] args) {
        String s = "dvdf";
        lengthOfLongestSubstring(s);
    }
}
