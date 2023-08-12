package Contructor;

public class Constructor_Inheritance {
    static class A {
        public A(int x){
            System.out.println(x);
        }
    }
    static class B extends A{
        public B(){
            super(5);
            System.out.println("B");
        }
    }

    public static void main(String[] args) {
        B obj = new B();
    }
}
