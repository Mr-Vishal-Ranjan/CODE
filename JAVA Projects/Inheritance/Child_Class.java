package Inheritance;

public class Child_Class extends Parent_Class{
    private
    int a,b,c;
    public void setabc(int a,int b,int c){
        this.a = a;
        this.b = b;
        this.c = c;
    }
    public void showabc(){
        System.out.println("a = "+a+" b = "+b+" c = "+c);
    }
}
