package LeetCode;

import java.util.ArrayList;
import java.util.List;

public class Factorial {
    public static void Add(List<Long> arr, long n, long start){
        if (start <= n){
            arr.add(start);
            start++;
            Add(arr,n,start);
        }
    }
    public static List<Long> factorialNumbers(long n) {
        List<Long> arr=new ArrayList<>();
        long start=1;
        Add(arr,n,start);
        return arr;
    }

    public static void main(String[] args) {
        System.out.println(factorialNumbers(7));
    }
}
