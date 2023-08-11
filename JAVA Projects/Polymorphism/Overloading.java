package Polymorphism;

public class Overloading {
    private int x;
    public void setx(int a){
        x = a;
    }
    public void setx(int a,int b){
        x = a+b;
    }
    public void setx(int a,int b,int c){
        x = a+b+c;
    }

    public int getX() {
        return x;
    }
    public void Name(){
        System.out.println("Vishal");
    }
    public static void main(String[] args) {
        Overloading object = new Overloading();

        object.setx(1,2,4);
        System.out.println(object.getX());
    }
}
