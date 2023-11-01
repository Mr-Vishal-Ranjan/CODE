package LeetCode;

public class NumberOfOccurrence {
    public static int count(int[] arr, int n, int x) {
        int l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;

            if(arr[mid]==x){
                if(arr[l]!=x){
                    l++;
                }
                if(arr[r]!=x){
                    r--;
                }
            }

            if(arr[r]==x && arr[l]==x){
                return r-l+1;
            }

            if(arr[mid]<x){
                l=mid+1;
            }
            if(arr[mid]>x) r=mid-1;
        }
        return 0;
    }

    public static void main(String[] args) {
        int[] arr={1 ,1 ,1 ,2 ,2 ,3 ,3};
        System.out.print(count(arr,7,3));
    }
}
