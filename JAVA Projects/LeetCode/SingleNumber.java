package LeetCode;

import java.util.HashMap;

public class SingleNumber {
    public int singleNumber(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (map.get(nums[i]) == null) {
                map.put(nums[i], 1);
            } else {
                int x=map.get(nums[i])+1;
                map.put(nums[i], x);
            }
        }
        for (int i = 0; i < nums.length; i++) {
            if (map.get(nums[i]) == 1) {
                return nums[i];
            }
        }
        return 0;
    }

    public static void main(String[] args) {

    }
}
