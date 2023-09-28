package LeetCode;

public class Rev_arr {
    public static void reverse(int[] arr,int left,int right){
        if (left<right) {
            arr[left]=arr[left]+arr[right];
            arr[right]=arr[left]-arr[right];
            arr[left]=arr[left]-arr[right];
            reverse(arr, left+1, right-1);
        }
    }
    public static int[] reverseArray(int n, int []nums) {
        // Write your code here.
        int left=0,right=n-1;
        reverse(nums,left,right);
        return nums;
    }

    public static void main(String[] args) {
        int[] arr={11,3,4,6,7};
        System.out.print(reverseArray(5,arr));
    }
}
