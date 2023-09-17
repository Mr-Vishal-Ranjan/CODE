package LeetCode;

public class Perfect_Square {
    public static boolean isPerfectSquare(int num) {
        int start,mid,end;
        start=1;end=num/2+1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(mid==num/mid && mid*mid ==num){
                return true;
            }else if(mid>num/mid){
                end = mid-1;
            }else if(mid<num/mid){
                start = mid+1;
            }else break;
        }
        return false;
    }
    public static void main(String[] args) {
        int num = 5;
        isPerfectSquare(num);
    }
}
