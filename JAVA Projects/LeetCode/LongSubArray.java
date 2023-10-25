package LeetCode;

public class LongSubArray {
    public static int longestSubarrayWithSumK(int[] nums, long k) {
        // Write your code here
        int i = 0, j = 0, maxLen = 0;
        long sum = 0;
        while (j < nums.length) {
            if(sum<k){
                sum+=nums[j];
                j++;
            }
            if (sum == k) {
                if (maxLen < j - i + 1) {
                    maxLen = j - i + 1;
                }
                j++;
            }
            if(sum>k){
                sum-=nums[i];
                i++;
            }
        }
        return maxLen;
    }

    public static void main(String[] args) {
        int[] a = {-1 ,0 ,1 ,1 ,-1 ,-1 ,0};
        System.out.println(longestSubarrayWithSumK(a, 0));
    }
}
//      int maxLen=0;
//        for(int i=0;i<a.length;i++){
//            int sum=0;
//            for(int j=i;j<a.length;j++){
//                sum+=a[j];
//                if(sum==k){
//                    if(maxLen<j-i+1){
//                        maxLen=j-i+1;
//                    }
//                }
//            }
//        }
//        return maxLen;