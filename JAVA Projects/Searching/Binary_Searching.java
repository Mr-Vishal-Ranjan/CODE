package Searching;

public class Binary_Searching {
    public static int search(int start,int end,int[] arr,int target){
        if (start > end){
            return -1;
        }
        int mid = start+(end-start)/2;
        if(arr[mid] == target){
            return mid;
        }else if(target < arr[mid]){
            end = mid - 1;
        } else if (target > arr[mid]) {
            start = mid + 1;
        }
        return search(start,end,arr,target);
    }

    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5};
        int start = 0;int end = arr.length-1;
        int index = search(start,end,arr,2);
        if (index > -1)
            System.out.println("target found on index "+index);
        else
            System.out.println("target not found");
    }
}
