package LeetCode;

public class Second_largest_number {
    public static int[] getSecondOrderElements(int n, int []a) {
        int left=0;int right=n-1;
        int[] arr = new int[2];
        int max=0, max2=0;
        int min=a[0], min2=a[1];

        while (left<=right) {

            if(a[left]>max){
                max=a[left];
            }

            if(a[left]<max && a[left]>max2){
                max2=a[left];
            }

            if(a[right]>max){
                max=a[right];
            }

            if(a[right]<max && a[right]>max2){
                max2=a[right];
            }

            if(a[left]<min){
                min=a[left];
            }

            if(a[left]>min && a[left]<min2){
                min2=a[left];
            }

            if(a[right]<min){
                min=a[right];
            }

            if(a[right]>min && a[right]<min2){
                min2=a[right];
            }

            left++;right--;

        }
        arr[0]=max2;
        arr[1]=min2;
        return arr;
    }

    public static void main(String[] args) {
        int[] arr={1,2,3,4,5,6,7,8,9,10};
        getSecondOrderElements(10,arr);
    }
}

/*
public static int[] getSecondOrderElements(int n, int []a) {
        int[] arr = new int[2];
        int l1=0,l2=0,s1=a[0],s2=a[1];

        for(int i=0;i<a.length;i++){
            if(a[i]>l1){
                l2=l1;
                l1=a[i];
            }

            if(a[i]<l1 && a[i]>l2){
                l2=a[i];
            }

            if(a[i]<s1){
                s2=s1;
                s1=a[i];
            }

            if(a[i]>s1 && a[i]<s2){
                s2=a[i];
            }
        }

        arr[0]=l2;
        arr[1]=s2;

        return arr;
    }
*/