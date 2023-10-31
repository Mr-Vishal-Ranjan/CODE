package LeetCode;

public class CielFloor {
    public static int ceilingInSortedArray(int n, int x, int[] arr) {
        // Write your code here.
        int[] ans=new int[2];
        ans[0]=-1;ans[1]=-1;

        int l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;

            if(arr[l]==x){
                ans[0]=x;ans[1]=x;
                break;
            }
            if(arr[r]==x){
                ans[0]=x;ans[1]=x;
                break;
            }
            if(arr[l]>x){
                ans[1]=arr[0];
                break;
            }
            if(arr[r]<x){
                ans[0]=arr[r];
                break;
            }
            //if(arr[r]<x){ans[]}
            if(arr[mid]==x){
                ans[0]=x;ans[1]=x;
                break;
            }

            if(mid<=n-2 && arr[mid]<x && arr[mid+1]>=x){
                ans[0]=arr[mid];ans[1]=arr[mid+1];
                break;
            }

            if(mid >= 1 && arr[mid]>x && arr[mid-1]<=x){
                ans[0]=arr[mid-1];ans[1]=arr[mid];
                break;
            }

            if(arr[mid]<x){
                l=mid+1;
            }else{
                r=mid-1;
            }

        }
        System.out.print(ans[0]+" ");
        return ans[1];
    }

    public static void main(String[] args) {
        int[] arr={3 ,17 ,23 };
        ceilingInSortedArray(3,12,arr);
    }
}
