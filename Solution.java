package Arrays;

public class Solution {
    public static void rotateArr(int arr[], int d) {
        // code here
        int n = arr.length;

        d = d%n;

        reverse(arr,0,n-1);
        reverse(arr,0,n-d-1);
        reverse(arr,n-d,n-1);


    }

    public static void reverse(int[] arr,int i,int j){
        while(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    static void main() {
        int[] arr = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
        // 20 18 16 12 10 8 6 4 2
        // 8, 10, 12, 14, 16, 18, 20, 2, 4, 6
        // 8 10 12 14 16 18 20 2 4 6
        int d = 3;
        rotateArr(arr,d);

        for (int s : arr){
            System.out.print(s+" ");
        }


    }
}
