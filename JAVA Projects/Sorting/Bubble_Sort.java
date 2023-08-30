package Sorting;

public class Bubble_Sort {
    public static void sort(int[] arr){
        for(int i=0;i<arr.length-1;i++){
            for (int j=i+1;j<arr.length-i;j++){
                if(arr[i]>arr[j]) {
                    arr[i] = arr[i] + arr[j];
                    arr[j] = arr[i] - arr[j];
                    arr[i] = arr[i] - arr[j];
                }
            }
        }
    }
    public static void main(String[] args) {
        int[] arr={5,3,1,2,4};
        sort(arr);
    }
}
