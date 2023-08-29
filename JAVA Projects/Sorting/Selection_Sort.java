package Sorting;

import java.util.Arrays;

public class Selection_Sort {
    public static int[] swap(int x , int y){
        x = x + y;
        y = x - y;
        x = x - y;
        return new int[]{x,y};
    }
    public static void sort(int[] arr){
        int small = 0;
        for (int i = 0; i < arr.length - 1;i++){
            for (int j = i + 1;j< arr.length;j++){
                if(arr[i] > arr[j]){
                    small=j;
                }
            }
            int[] a = swap(arr[i],arr[small]);
            arr[i] = a[0];
            arr[small] = a[1];
        }
    }

    public static void main(String[] args) {
        int[] arr={5,3,4,2,1};
        sort(arr);
        System.out.println(Arrays.toString(arr));
    }
}
