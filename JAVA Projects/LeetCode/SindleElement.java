package LeetCode;

import java.util.ArrayList;

public class SindleElement {
    public static int singleNonDuplicate(ArrayList<Integer> arr)
    {
        int l=0,r=arr.size()-1;
        if(arr.size()==1) return arr.get(0);
        while(l<=r){
            int mid = (l+r)/2;

            if(arr.get(l)!=arr.get(l+1)){
                if(l>0 && arr.get(l)!=arr.get(l-1)){
                    return arr.get(l);
                }else if(l==0){return arr.get(l);}
            }
            if(arr.get(r)!=arr.get(r-1)){
                if(r<arr.size()-1 && arr.get(r)!=arr.get(r+1) ){
                    return arr.get(r);
                }else if(r==arr.size()-1){return arr.get(r);}
            }

            if(arr.get(mid-1)!=arr.get(mid)  && arr.get(mid)!=arr.get(mid+1)){
                return arr.get(mid);
            }

            if(mid%2==0){
                if(arr.get(mid)!=arr.get(mid+1)){
                    r=mid-1;
                }else l=mid;
            }else{
                if(arr.get(mid)!=arr.get(mid-1)){
                    r=mid-1;
                }else l=mid-1;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        ArrayList <Integer> arr = new ArrayList<>();
        int[] array = {5,5,7,9,9,10,10,11,11,30,30,39,39,41,41,43,43,50,50};
        for(int i=0;i<19;i++){
            arr.add(array[i]);
        }
        singleNonDuplicate(arr);
    }

}
