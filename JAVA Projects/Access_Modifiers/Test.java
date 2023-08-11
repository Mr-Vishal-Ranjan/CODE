package Access_Modifiers;
public class Test {
    //Outer_Class obj = new Outer_Class();
    //Outer_Class.Inner1 obj1 = new Outer_Class.Inner1();
    public static void main(String[] args) {
        Outer_Class.Inner1.setX(7);
        System.out.println(Outer_Class.Inner1.getX());
    }
    //Outer_Class_Inner_Class.Inner2 obj2 = new Outer_Class_Inner_Class.Inner2();
}
