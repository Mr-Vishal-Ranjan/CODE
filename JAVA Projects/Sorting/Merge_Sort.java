package Sorting;

public class Merge_Sort {
    public static void merge(int[] arr, int start, int mid, int end) {
        int first = mid - start+1, second = end - mid;
        int[] a = new int[first];
        int[] b = new int[second];
        for (int i = 0; i < first; i++) {
            a[i] = arr[start + i];
        }
        for (int i = 0; i < second; i++) {
            b[i] = arr[mid + 1 + i];
        }
        int i = 0, j = 0, temp = start;
        while (i < first && j < second) {
            if (a[i] >= b[j]) {
                arr[temp] = b[j];
                j++;
            } else  {
                arr[temp] = a[i];
                i++;
            }
            temp++;
        }
        while (i<first){
            arr[temp] = a[i];
            i++;temp++;
        }
        while (j < second){
            arr[temp] = b[j];
            j++;temp++;
        }
    }
    public static void divide(int[] arr, int start, int end) {
        int mid = start + (end - start) / 2;
        if (start < end) {
            divide(arr, start, mid);
            divide(arr, mid + 1, end);
            merge(arr, start, mid, end);
        }
    }

    public static void main(String[] args) {
        int[] arr={5,8,3,6,2};
        divide(arr,0, arr.length-1);
    }
}
