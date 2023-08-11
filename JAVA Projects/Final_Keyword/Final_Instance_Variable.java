package Final_Keyword;
public class Final_Instance_Variable {
    private final int x;// Final instance variable

    {
        x = 5;
        System.out.println(x);
    }

    public static void main(String[] args) {
        Final_Instance_Variable v1 = new Final_Instance_Variable();
    }
}
