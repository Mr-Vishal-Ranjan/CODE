package Searching;

public class Linear_Searching {
    public static int search(int target,int arr[]){
        for(int i = 0;i < arr.length ;i++){
            if (target == arr[i]){
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5};
        int index = search(4,arr);
        if (index != -1){
            System.out.println("Target index is "+index);
        }else{
            System.out.println("Target not found");
        }
    }
}
