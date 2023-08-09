package Static;
public class Static_Variable_N_Function {
    int x; //instance variable
    private static int y; //static variable

//    public void fun1{
//        //instance member method or function
//    }
    public static void fun2(){
        //static member method
        y = 4 ;
        System.out.println(y);
    }
    static class Test{
        public static String country = "INDIA";
    }
    public static class Hello{
        Static_Variable_N_Function ex1 = new Static_Variable_N_Function();
        Static_Variable_N_Function ex2 = new Static_Variable_N_Function();

        //System.out.print(Static_variable_N_Function.Test.country);
    }

    public static void main(String[] args){
        Static_Variable_N_Function.fun2();
        System.out.print(Test.country);
    }
}
