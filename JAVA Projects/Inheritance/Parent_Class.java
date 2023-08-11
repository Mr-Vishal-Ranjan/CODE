package Inheritance;

public class Parent_Class {
    private
    int x;
    int y;
    int z;

    public void setxyz(int x,int y,int z){
        this.x = x;
        this.y = y;
        this.z = z;
    }
    public void showxyz(){
        System.out.println("x = "+x+" y = "+y+" z = "+z);
    }
}
