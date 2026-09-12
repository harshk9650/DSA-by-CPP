package Arrays;

public class DeleteAtThePosition {
    static void main(String[] args) {
//        with using the auxilary space
        int[] arr = {10,20,30,40,50};
        int target = 2;
        int[] brr = new int[arr.length-1];

        for(int i=0;i<target;i++){
            brr[i] = arr[i];
        }


        for(int i=target;i< arr.length-1;i++){
            brr[i] = arr[i+1];
        }

        for(int i=0;i<brr.length;i++){
            System.out.print(brr[i]+" ");
        }

        //  without using the auxilary space

//        public class DeleteFromIndex {
//
//            public static void main(String[] args) {
//
//                int[] arr = {10, 20, 30, 40, 50};
//                int index = 2;
//
//                // Shift elements to the left
//                for (int i = index; i < arr.length - 1; i++) {
//                    arr[i] = arr[i + 1];
//                }
//
//                // Print array after deletion
//                for (int i = 0; i < arr.length - 1; i++) {
//                    System.out.print(arr[i] + " ");
//                }
//            }
//        }

    }
}
