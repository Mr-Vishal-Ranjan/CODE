package Array_List;

import java.util.ArrayList;

public class AL1 {
    public static void main(String[] args) {
        ArrayList a = new ArrayList();
        a.add("One");
        a.add("two");
        a.add("three");
        a.add("four");

        ArrayList b = new ArrayList();
        b.add("Five");

        a.addAll(b);
        a.remove("three");
        a.removeAll(b);
        a.size();
        System.out.println(a.contains("One"));
        a.clear();
        System.out.println(a.isEmpty());

        System.out.println(a.iterator());

        a.add(0,"zero");
        a.add(1,"one");
        a.set(1,"two");
        System.out.println(a.get(1));
        System.out.println(a.indexOf("zero"));
        System.out.println(a.subList(0,1));
        a.remove(1);
    }
}
