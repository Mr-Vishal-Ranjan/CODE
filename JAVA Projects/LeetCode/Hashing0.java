package LeetCode;

import java.util.Arrays;

public class Hashing0 {
    public static void Hashing(int n,int[] nums,int[] hash){
        if(nums[n-1]>0&&nums[n-1]<= nums.length){
            hash[nums[n-1]-1]++;
        }
        n--;
        if(n>0) {
            Hashing(n, nums, hash);
        }
    }
    public static int[] countFrequency(int n, int []nums){
        int[] hash=new int[n];
        Hashing(n,nums,hash);
        return hash;
    }

    public static void main(String[] args) {
        int n=10;
        int[] nums={11,14,8,3,12,14,1,7,4,3};
        System.out.println(Arrays.toString(countFrequency(n, nums)));
    }
}