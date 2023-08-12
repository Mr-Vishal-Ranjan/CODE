package Contructor;

public class Constructor_Chaning {
    static class A {
        public A(){
            System.out.println("A1");
        }
    }
    static class B extends A{
        public B(){
            this(5);
            System.out.println("B1");
        }
        public B(int x){
            System.out.println("B2");
        }
    }

    public static void main(String[] args) {
        B obj = new B();
    }
}
