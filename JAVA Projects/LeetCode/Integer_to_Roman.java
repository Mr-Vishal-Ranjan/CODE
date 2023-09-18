package LeetCode;

public class Integer_to_Roman {
    public static String intToRoman(int num) {
        int[] arr = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        String s = "";
        String[] r = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        for (int i = 0; i < arr.length; ) {
            if (num == 3) {
                s += "III";
                return s;
            }
            if (num == 2) {
                s += "II";
                return s;
            }
            if (num != num % arr[i]) {
                s += r[i];
                if (num / arr[i] <= 0) {
                    num %= arr[i];
                    i++;
                } else {
                    num -= arr[i];
                }
            }else i++;
        }
        return s;
    }

    public static void main(String[] args) {
        int v = 20;
        intToRoman(v);
    }
}
