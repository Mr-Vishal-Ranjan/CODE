package Sorting;

import static Sorting.Selection_Sort.swap;

public class Insertion_Sort {
    public static void sort(int[] arr){
        for (int i = 0;i< arr.length-1;){
            int temp = i;
            while(temp!= arr.length-1){
                if(arr[temp]>arr[temp+1]){
                    arr[temp] = arr[temp]+arr[temp+1];
                    arr[temp+1] = arr[temp] - arr[temp+1];
                    arr[temp]=arr[temp] - arr[temp+1];
                    temp += 1;
                }else {i++;break;};
            }
        }
    }

    public static void main(String[] args) {
        int[] arr={5,3,1,2,4};
        sort(arr);
    }
}
