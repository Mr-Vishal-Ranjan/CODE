package Sorting;

import static Sorting.Selection_Sort.swap;

public class Insertion_Sort {
    public static void sort(int[] arr){
        for (int i = 1;i< arr.length;i++){
            for(int j = i - 1;j >= 0; j--){
                if(arr[j]>arr[i]){
                    arr[i]=arr[i]+arr[j];
                    arr[j]=arr[i]-arr[j];
                    arr[i]=arr[i]-arr[j];
                    i--;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] arr={5,3,1,2,4};
        sort(arr);
    }
}
