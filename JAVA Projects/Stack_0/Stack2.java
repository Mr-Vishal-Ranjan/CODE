package Stack_0;

import java.util.Stack;

public class Stack2 {
    public static void main(String[] args) {
        Stack stack1 = new Stack();

        stack1.push("one");
        stack1.push("two");
        System.out.println(stack1.search("one"));
        System.out.println(stack1.empty());
    }
}
