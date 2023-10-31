package LeetCode;

public class UpperBound {
    public static int upperBound(int []arr, int x, int n){
        // Write your code here.
        int start=0,end=arr.length-1;
        while(start<=end){
            int mid=(start+end)/2;

            if(arr[start]>x) return start;
            //if(arr[end]<x) return end ;

            if(arr[mid]==x){
                //if(arr[mid-1]==x) return mid-1;
                return mid+1;
            }
            if(arr[mid] > x){
                if(arr[mid-1]<=x){
                    return mid;
                }
                end = mid-1;
            }else{
                if(mid<=n-2 && arr[mid+1]>x) return mid+1;
                start=mid+1;
            }
        }
        return 0;
    }

    public static void main(String[] args) {
        int[] arr={1,10};
        System.out.println(upperBound(arr,7,2));
    }
}
