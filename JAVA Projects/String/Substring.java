package String;

public class Substring {
    public static void main(String[] args) {
        String s1 = new String("Computer");

        String s2 = s1.substring(2);
        System.out.println(s2);

        s2 = s1.substring(2,5);
        System.out.println(s2);
    }
}
