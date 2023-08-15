package String;

public class StringEX {
    public static void main(String[] args) {
        String str1 = "Computer";
        String str2 = "Computer";
        String str3 = new String("Computer");

        System.out.println("Result 1: "+(str1==str2));
        System.out.println("Result 2: "+str1.equals(str2));
        System.out.println("Result 3: "+(str1==str3));
        System.out.println("Result 4: "+str1.equals(str3));

    }
}
