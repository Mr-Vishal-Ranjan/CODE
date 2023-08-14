package Abstraction;

public class Abstract_Class {
    abstract static class Person{
        abstract void show();

    }
    static class B extends Person{
        public void show(){
            System.out.println("ABSTRACTION");
        }
    }

    public static void main(String[] args) {
        Person obj = new B();
        obj.show();
    }
}
