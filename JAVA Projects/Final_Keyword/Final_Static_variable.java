package Final_Keyword;

public class Final_Static_variable {
    private final static int x;// Final instance variable

    static
    {
        x = 5;
        System.out.println(x);
    }

    public static void main(String[] args) {
        Final_Static_variable v1 = new Final_Static_variable();
    }
}
