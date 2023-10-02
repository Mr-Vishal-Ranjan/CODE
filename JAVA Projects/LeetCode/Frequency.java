package LeetCode;

import java.util.HashMap;

public class Frequency {
    public static int[] getFrequencies(int []v) {
        int[] arr=new int[2];
        HashMap<Integer,Integer> hash=new HashMap<>();

        arr[0]=v[0];
        arr[1]=v[0];

        for(int i=0;i<v.length;i++){
            if(hash.get(v[i])!=null)
                hash.put(v[i],hash.get(v[i])+1);
            else
                hash.put(v[i],1);
        }

        for(int i=0;i<v.length;i++){
            if(hash.get(arr[1])>=hash.get(v[i])){
                if(hash.get(arr[1])==hash.get(v[i])){
                    if(arr[1]>v[i]){
                        arr[1]=v[i];
                    }
                }else{
                    arr[1]=v[i];
                }
            }

            if(hash.get(arr[0])<=hash.get(v[i])){
                if(hash.get(arr[0])==hash.get(v[i])){
                    if(arr[0]>v[i]){
                        arr[0]=v[i];
                    }
                }else arr[0]=v[i];
            }
        }

        return arr;
    }

    public static void main(String[] args) {
        int[] v={35,34,6,6,43,3};
        getFrequencies(v);
    }
}
