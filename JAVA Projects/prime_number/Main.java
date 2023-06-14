package prime_number;

class Student{
    private int age;

    public void setAge(int x){
        age = x;
    }

    public void showAge(){
        System.out.print(age);
    }
}
public class Main {
    public static void main(String[] args)
    {
       Student v = new Student();
       v.setAge(19);
       v.showAge();
    }
}
