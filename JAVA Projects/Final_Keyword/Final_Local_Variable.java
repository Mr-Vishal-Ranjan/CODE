package Final_Keyword;

public class Final_Local_Variable {
    public static void method(){
        final int x = 5;
        System.out.println(x);
    }

    public static void main(String[] args) {
        Final_Local_Variable obj = new Final_Local_Variable();
        obj.method();
    }

}
