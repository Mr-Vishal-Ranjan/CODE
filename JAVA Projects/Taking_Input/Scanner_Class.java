package Taking_Input;

import java.util.Scanner;

public class Scanner_Class {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Name and Age :--");
        String name = sc.nextLine();
        int age = sc.nextInt();
        System.out.println("Name:-- "+name+" Age:- "+age);
    }
}
