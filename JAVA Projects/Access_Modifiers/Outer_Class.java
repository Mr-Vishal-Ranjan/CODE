package Access_Modifiers;
public class Outer_Class {
    private class Inner{
        public int x;
    }
    public class Inner1{
        public int x;
    }
    protected class Inner2{
        public int x;
    }
    Inner obj = new Inner();
    Inner1 obj0 = new Inner1();
    Inner2 obj1 = new Inner2();
}
class Test0 {
    Outer_Class.Inner1 obj0 = new Outer_Class().Inner1;

}
