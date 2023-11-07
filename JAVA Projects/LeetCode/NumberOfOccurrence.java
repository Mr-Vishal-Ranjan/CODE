package LeetCode;

public class NumberOfOccurrence {
    public static int count(int[] arr, int n, int x) {
        int low =-1, high = -1, l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;

            if(arr[mid]==x){
                low = mid;
                r=mid-1;
            }

            else if(x < arr[mid]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        l=0;r=n-1;
        while(l<=r){
            int mid=(l+r)/2;

            if(arr[mid]==x){
                high = mid;
                l=mid+1;
            }

            else if(x < arr[mid]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        System.out.print(low +" " + high);

        return high - low <= 0 ? 0 : high - low +1;
    }

    public static void main(String[] args) {
        int[] arr={ 4 ,10 ,10, 10, 10, 10, 10, 11, 12, 14, 14, 17, 19, 19 };
        System.out.print(count(arr,14,10));
    }
}
