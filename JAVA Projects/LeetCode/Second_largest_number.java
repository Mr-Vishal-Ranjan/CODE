package LeetCode;

public class Second_largest_number {
    public static int[] getSecondOrderElements(int n, int []a) {
        int left=0;int right=n-1;
        int[] arr = new int[2];
        arr[0]=a[0];
        arr[1]=a[0];
        int max=0;
        int min=a[0];

        while (left<=right) {

            if(a[left]>max){
                max=a[left];
            }

            if(a[right]>max){
                max=a[right];
            }

            if(a[left]<max && a[left]>arr[0]){
                arr[0]=a[left];
            }

            if(a[right]<max && a[right]>arr[0]){
                arr[0]=a[right];
            }

            if(a[left]<min){
                min=a[left];
            }

            if(a[right]<min){
                min=a[right];
            }

            if(a[left]>min && a[left]<arr[1]){
                arr[1]=a[left];
            }

            if(a[right]>min && a[right]<arr[1]){
                arr[1]=a[right];
            }

            left++;right--;

        }
        return arr;
    }

    public static void main(String[] args) {
        int[] arr={1,2,3,4,5,6,7,8,9,10};
        getSecondOrderElements(10,arr);
    }
}
