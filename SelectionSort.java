package ArrayQuestions;

public class SelectionSort{
    public static void selectionSort(int[] arr){

    }
    static void main(String[] args) {
        int[] arr = {6,5,1,2,3};

        int n = arr.length;

        for (int i=0;i<n-1;i++){

            int minidx = i;

            for(int j=i+1;j<n;j++){
                System.out.println("here this is the minidx value before: "+arr[minidx]);
                if(arr[j]<arr[minidx]){
                    minidx=j;
                }
                System.out.println("here this is the minidx value after: "+arr[minidx]);
            }
            System.out.println();
            int temp = arr[minidx];
            arr[minidx] = arr[i];
            arr[i] = temp;
        }

        for(int i:arr){
            System.out.print(i+" ");
        }
    }
}
