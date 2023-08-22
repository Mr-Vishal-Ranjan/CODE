package Set;

import java.util.HashSet;
import java.util.LinkedList;

public class Hashset {
    public static void main(String[] args) {
        HashSet h = new HashSet();

        HashSet a = new HashSet(10);

        HashSet b = new HashSet(20, (float) 0.75f);

        LinkedList l = new LinkedList();
        l.add("one");
        l.add("two");

        HashSet c = new HashSet(l);
    }
}
