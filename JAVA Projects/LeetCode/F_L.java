package LeetCode;

import java.util.ArrayList;
import java.util.List;

public class F_L {
    public static List< Integer > Check(int[] arr,int target){
        int l=0,r=arr.length-1;
        List <Integer> list=new ArrayList<>();
        list.add(-1);
        list.add(-1);
        while(l<r){
            if(arr[l]==target&&list.get(0)==-1){
                list.set(0,l);
            }else l++;
            if(arr[r]==target&&list.get(1)==-1){
                list.set(1,r);
            }else r--;
            if(list.get(0)!=-1&&list.get(1)!=-1){
                break;
            }
        }
        if(list.get(0)==-1)list.set(0,list.get(1));
        else if(list.get(1)==-1)list.set(1,list.get(0));
//        if(list.get(0)==-1||list.get(-1)==-1){
////            list.set(0,list.get(0)+list.get(1));
////            list.set(1,list.get(0)-list.get(1));
////            list.set(0,list.get(0)-list.get(1));
//        }
        return list;
    }
    public static void main(String[] args) {
        int[] arr={1,2,5,6,3,5,7,8,4};
        System.out.println(Check(arr,5));
    }
}
