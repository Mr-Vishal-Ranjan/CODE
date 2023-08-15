package Array;

import java.util.Scanner;

public class Array_1D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] array = new int[4];
        int[] array1 = new int[]{1,2,3,4,5};
        int[] arr = {1,2,3,4};

        for (int i=0 ; i<4 ;i++){
            array[i] = sc.nextInt();
        }

        for (int i = 0 ; i < 4 ; i++){
            System.out.println(array[i]);
        }
    }
}
