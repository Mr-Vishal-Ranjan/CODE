package LeetCode;

public class RotateArray {
    public static void rotate(int[] nums, int k) {
        if(k>nums.length){
            k=nums.length-k;
        }
        int[] num = new int[k];

        for(int i=0;i<num.length;i++){
            num[i]=nums[nums.length-k+i];
        }

        for(int i=nums.length-num.length-1;i>=0;i--){
            nums[i+num.length]=nums[i];
        }

        for(int i=0;i<num.length;i++){
            nums[i]=num[i];
        }
    }

    public static void main(String[] args) {
        int[] arr={1,2,3,4,5,6,7};
        rotate(arr,3);
    }
}
