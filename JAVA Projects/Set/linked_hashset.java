package Set;

import java.util.LinkedHashSet;
import java.util.LinkedList;

public class linked_hashset {
    public static void main(String[] args) {
        LinkedHashSet l = new LinkedHashSet();
        LinkedHashSet a = new LinkedHashSet(20);
        LinkedHashSet b = new LinkedHashSet(10,(float)0.5f);

        LinkedList x= new LinkedList();
        x.add("One");
        x.add("two");

        LinkedHashSet c = new LinkedHashSet(x);
    }
}
