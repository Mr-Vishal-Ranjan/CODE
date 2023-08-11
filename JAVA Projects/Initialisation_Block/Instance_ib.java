package Initialisation_Block;

public class Instance_ib {
    private int x;

    //Instance Initialisation Block
    {
        x = 5;
        System.out.println("x = "+x);
    }

    public static void main(String[] args) {
        Instance_ib object = new Instance_ib();
    }
}
