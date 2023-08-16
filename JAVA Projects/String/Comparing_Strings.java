package String;

public class Comparing_Strings {
    public static void main(String[] args) {
        String s1 = new String("Computer");
        String s2 = new String("computer");

        if(s1.equals(s2)){
            System.out.println("Strings are exactly same");
        } else if (s1.equalsIgnoreCase(s2)) {
            System.out.println("Strings are same");
        }else
            System.out.println("Strings are not same");

        int i = s1.compareTo(s2);
        if(i==0){
            System.out.println("Strings are same");
        } else if (i>0) {
            System.out.println("Opposite to dictionary order");
        }else
            System.out.println("Dictionary order");
    }
}
