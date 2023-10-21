package LeetCode;

public class RemoveDublictes {
    public static int removeDuplicates(int[] nums) {
        int count=0;
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]!=nums[i+1]){
                count++;
                nums[count]=nums[i+1];
            }
        }
        return count+1;
    }

    public static void main(String[] args) {
        int[] nums ={1,1,2};
        removeDuplicates(nums);
    }
}
