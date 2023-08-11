package Access_Modifiers;
public class Outer_Class {
    private static class Inner{
        private static int x;
        public static void setX(int y){
            x = y;
        }
        public static int getX(){
            return x;
        }
    }
    public static class Inner1{
        private static int x;
        public static void setX(int y){
            x = y;
        }
        public static int getX(){
            return x;
        }
    }
    protected static class Inner2{
        private static int x;
        public static void setX(int y){
            x = y;
        }
        public static int getX(){
            return x;
        }
    }
    public static void set() {
        Inner.setX(1);
        Inner1.setX(11);
        Inner2.setX(22);
    }
    public void Show(){
        System.out.println("Show values "+Inner.getX()+Inner1.getX()+Inner2.getX());
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
