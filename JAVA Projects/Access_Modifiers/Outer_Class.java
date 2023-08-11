package Access_Modifiers;
public class Outer_Class {
    private static class Inner{
        public static int x;
    }
    public static class Inner1{
        public static int x;
    }
    protected static class Inner2{
        public static int x;
    }
        public static void Testing_Class(){
            Inner.x = 1;
            Inner1.x = 11;
            Inner2.x = 22;
    }

    public void Show(){
        System.out.println("Show ex "+Inner1.x+Inner2.x+Inner.x);
    }
    Inner obj = new Inner();
    Inner1 obj0 = new Inner1();
    Inner2 obj1 = new Inner2();
}
class Test0 {
    public static void main(String[] args) {
        Outer_Class obj0 = new Outer_Class();
        System.out.println("Yo");
        obj0.Show();
    }
}
