package ArrayQuestions;

public class BubbleSort{
    public static void bubblesort(int[] arr){
        int n = arr.length;

        for (int i=0;i<n-1;i++){
            for (int j=n-1;j>=1;j--){
                if(arr[j]>arr[j-1]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                }
            }
        }
    }
    static void main(String[] args) {
        int[] arr = {3,2,1,98,-7};

        bubblesort(arr);

        for(int i:arr){
            System.out.print(i+" ");
        }
    }
}
