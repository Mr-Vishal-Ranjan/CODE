package LeetCode;

public class BB_Sort {
    public static void rec(int[] arr,int n,int temp,int count){

        if(temp==n-1){
            temp=0;count=1;n-=1;
        }

        if(arr[temp]>arr[temp+1]){
            arr[temp]=arr[temp]+arr[temp+1];
            arr[temp+1]=arr[temp]-arr[temp+1];
            arr[temp]=arr[temp]-arr[temp+1];
        }else count++;
        temp++;

        if(count<n){
            rec(arr, n, temp,count);
        }
    }
    public static void bubbleSort(int[] arr, int n) {
        int temp=0,count=1;
        rec(arr,n,temp,count);
    }

    public static void main(String[] args) {
        int[] arr={5,3,4,10,2};
        bubbleSort(arr,5);
    }
}
