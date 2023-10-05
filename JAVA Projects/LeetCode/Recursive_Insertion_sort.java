package LeetCode;

public class Recursive_Insertion_sort {
    public static void rec(int[] arr,int size,int index,int temp){
        if(arr[temp]<arr[temp-1]){
            arr[temp] = arr[temp]+arr[temp-1];
            arr[temp-1] = arr[temp] - arr[temp-1];
            arr[temp] = arr[temp] - arr[temp-1];
            temp--;
        } else {
            index++;
            temp=index;
        }
        if(temp == 0){
            index++;
            temp=index;
        }
        if(index!=size){
            rec(arr,size,index,temp);
        }
    }
    public static void insertionSort(int[] arr, int size) {
        int index=1,temp=1;
        rec(arr,size,index,temp);
    }

    public static void main(String[] args) {
        int[] arr={4,3,1,2,10,5,9};
        insertionSort(arr,7);
    }
}
