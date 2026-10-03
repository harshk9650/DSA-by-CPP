package Arrays;

public class MergeTwoSortedArrays {
    static void main(String[] args) {
        int[] arr = {10,30,60,80,85};
        int[] brr = {20,40,45,50,52,60};
        int[] res = new int[arr.length+ brr.length];

        int i=0,j=0,k=0;

        while (i< arr.length && j< brr.length){
            if(arr[i] < brr[j]){
                res[k] = arr[i];
                i++;
                k++;
            }else {
                res[k] = brr[j];
                k++;
                j++;
            }
        }

//        while (i< arr.length){
//            res[k] = arr[i];
//            k++;
//            i++;
//        }
//
//        while (j< brr.length){
//            res[k] = brr[j];
//            k++;
//            j++;
//        }

       for(int x : res){
           System.out.print(x+" ");
       }


    }
}
