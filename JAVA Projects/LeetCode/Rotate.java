package LeetCode;

public class Rotate {
    public static void rotate(int[] nums, int k) {
        for (int j = 0; j <= k; j++) {

            int temp = nums[nums.length - 1];

            for (int i = nums.length-2; i >= 0; i--) {
                nums[i+1] = nums[i];
            }

            nums[0] = temp;
        }
    }

    public static int longestSubarrayWithSumK(int []a, long k) {
        // Write your code here
        int res=0;
        int temp=0;
        int sum=0;
        for(int i=0; i<a.length; i++){
            sum = sum + a[i];
            temp++;
            if(sum >= k) {
                res = Math.max(temp, res);
            }

        }
        return res;
    }

    public static void main(String[] args) {
        int[] arr={1,2,3,1,1,1,1};
        longestSubarrayWithSumK(arr,3);
        rotate(arr,3);
    }
}
