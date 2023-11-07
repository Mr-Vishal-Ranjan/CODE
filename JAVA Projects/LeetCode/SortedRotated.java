package LeetCode;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class SortedRotated {
    public static int search(ArrayList<Integer> arr, int n, int k) {
        // Write your code here.
        int l=0;int r=n-1;
        while(l<=r){
            int mid=(l+r)/2;

            if(arr.get(l)==k){
                return l;
            }

            if(arr.get(r)==k){
                return r;
            }

            if(arr.get(mid)==k){
                return mid;
            }

            if(arr.get(l)<k && arr.get(mid)>k){
                r=mid-1;
            }else if(arr.get(l)<k && arr.get(mid)<k && arr.get(l)<arr.get(mid)){
                if(k<arr.get(r)){
                    r=mid+1;
                }else l=mid+1;
            }else if(arr.get(l)<k && arr.get(mid)<k && arr.get(l)>arr.get(mid)){
                r=mid-1;
            }
        }
        return -1  ;
    }

    public static void main(String[] args) {
        //7 8 9 10 0 1 2 5 6
        ArrayList<Integer> arr =new ArrayList <> ();
        arr.add(7);
        arr.add(8);arr.add(9);arr.add(10);arr.add(0);arr.add(1);arr.add(2);arr.add(5);arr.add(6);

        search(arr,9,9);
    }
}
