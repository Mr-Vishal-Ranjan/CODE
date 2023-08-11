package Access_Modifiers;
public class Outer_Class {
    private static class Inner{
        public int x;
        public static void setX(int y){
            y = x;
        }
        public static int getX(){
            return x;
        }
    }
    public static class Inner1{
        public int x;
    }
    protected static class Inner2{
        public int x;

    }
    public void set() {
        Inner.setX(1);
        //Inner1.x = 11;
        //Inner2.x = 22;
    }
    public void Show(){
        System.out.println("Show ex "+Inner.getX());
    }
    Inner obj = new Inner();
    Inner1 obj0 = new Inner1();
    Inner2 obj1 = new Inner2();
}
class Test0 {
    public static void main(String[] args) {
        Outer_Class obj0 = new Outer_Class();
        System.out.println("Yo");
        obj0.set();
        obj0.Show();
    }
}
