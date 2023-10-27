package LeetCode;

import java.util.HashMap;

public class LongSubArray {
    public static int getLongestSubarray(int []nums, int k) {
        HashMap <Long,Integer> hash=new HashMap<>();
        long sum=0;
        int maxLen = 0;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            if(sum==k){
                maxLen=i+1;
            }
            if(!hash.containsKey(sum)){
                hash.put(sum, i);
            }
            if( hash.containsKey(sum-k)){
                maxLen=Math.max(maxLen,i - hash.get(sum-k));
            }
        }
        return maxLen;
    }

    public static void main(String[] args) {
        int[] a = {1,1,1};
        System.out.println(getLongestSubarray(a, 4));
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