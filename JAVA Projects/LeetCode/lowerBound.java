package LeetCode;

public class lowerBound {
    public static int lowerBound(int []arr, int n, int x) {
        // Write your code here
        int start=0,end=arr.length-1;
        while(start<=end){
            int mid=start+(end-start)/2;

            if(arr[mid] < x){
                start = mid;
            }
            if(arr[mid] > x){
                end = mid;
            }
            if(arr[mid]==x){
                return arr[mid-1];
            }
        }

        if(x<arr[0]){
            return 0;
        }
        return arr.length-1;
    }

    public static void main(String[] args) {
        int[] arr={1,2,2,3};
        lowerBound(arr,4,4);
    }
}
