package Initialisation_Block;

public class Static_ib {
    private static int x;

    //Static_ib
    static
    {
        x = 10;
        System.out.println("x = "+x);
    }

    public static void main(String[] args) {
        Static_ib object = new Static_ib();
    }
}
