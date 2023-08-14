package Abstraction;

public class Interface {
    interface I1{
        void fun1();
    }
    interface I2{
        void fun2();
    }
    static class A implements I1 , I2{
        @Override
        public void fun1() {

        }
        @Override
        public void fun2() {

        }
        public void fun3(){

        }
    }

    public static void main(String[] args) {
        I2 obj = new A();
        obj.fun2();
        //obj.fun1(); ERROR
        //obj.fun3(); ERROR
    }
}
