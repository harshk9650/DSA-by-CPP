package Arrays;

public class DeleteFromTheEnd {
    static void main(String[] args) {
        int[] arr = {10,20,30};

        int[] brr = new int[arr.length-1];

        for(int i=0;i< arr.length-1;i++){
            brr[i] = arr[i];
        }

        for(int i=0;i< brr.length;i++){
            System.out.println(brr[i]);
        }
    }
}
