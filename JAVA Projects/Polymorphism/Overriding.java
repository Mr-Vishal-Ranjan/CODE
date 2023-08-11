package Polymorphism;

public class Overriding extends Overloading{
    public void Name(){
        System.out.println("Vishal Ranjan");
    }

    public static void main(String[] args) {
        Overriding object = new Overriding();
        object.Name();
    }
}
