package LeetCode;

import java.util.ArrayList;
import java.util.List;

public class Union {
    public static List< Integer > sortedArray(int []a, int []b) {
        // Write your code here
        ArrayList <Integer> arr = new ArrayList<>();

        int i=0,j=0;
        while(i<a.length && j<b.length){
            if(a[i]<b[j]){
                arr.add(a[i]);
                i++;
            }else if(a[i]==b[j]){
                arr.add(a[i]);
                i++;j++;
            }else{
                arr.add(b[j]);
                j++;
            }
            while(i<a.length && arr.get(arr.size()-1)==a[i]){
                i++;
            }
            while(j<b.length && arr.get(arr.size()-1)==b[j]){
                j++;
            }
        }

        while(i<a.length){
            if (arr.get(arr.size() - 1) != a[i]) {
                arr.add(a[i]);
            }
            i++;
        }

        while(j<b.length){
            if (arr.get(arr.size() - 1) != b[j]) {
                arr.add(b[j]);
            }
            j++;
        }
        return arr;
    }

    public static void main(String[] args) {
        int[] a={3 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,9 ,9};
        int[] b={2 ,4 ,10 ,10 };
        sortedArray(a,b);
    }
}

