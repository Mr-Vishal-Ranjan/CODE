package String;

public class IndexOf {
    public static void main(String[] args) {
        String s1=new String("Computer");

        int i = s1.indexOf('m');
        System.out.println(i);

        int a = s1.indexOf('m',1);
        System.out.println(a);

        int b = s1.indexOf("ute");
        System.out.println(b);

        int c = s1.indexOf("ute",4);
        System.out.println(c);

        int d = s1.lastIndexOf('m');
        System.out.println(d);

        int e = s1.lastIndexOf('m',4);
        System.out.println(e);

        int f = s1.lastIndexOf("mp");
        System.out.println(f);

        int g = s1.lastIndexOf("mp",1);
        System.out.println(g);

    }
}
