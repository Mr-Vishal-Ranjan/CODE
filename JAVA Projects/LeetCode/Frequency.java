package LeetCode;

import java.util.HashMap;

public class Frequency {
    public static int[] getFrequencies(int []v) {
        int[] arr = new int[2];
        HashMap<Integer, Integer> hash = new HashMap<>();

        for (int i = 0; i < v.length; i++) {
            if(hash.get(v[i])!=null)
                hash.put(v[i],hash.get(v[i])+1);
            else
                hash.put(v[i],1);
        }

        return arr;
    }

    public static void main(String[] args) {
        int[] v={35,34,6,6,43,3};
        getFrequencies(v);
    }
}
