package Arrays;

public class PairForm {
    static void main(String[] args) {
        int [] arr = {1,2,3};


        int largest = Integer.MIN_VALUE;
        int secondLargest = Integer.MIN_VALUE;

        for (int x : arr) {
            if (x > largest) {
                secondLargest = largest;
                largest = x;
            } else if (x > secondLargest && x != largest) {
                secondLargest = x;
            }
        }

        System.out.println("Second largest: " + secondLargest);


















//        int count = 0;
//        int count2 = 0;
//
//        for(int i=0;i<arr.length;i++){
//            for(int j=0;j< arr.length;j++){
//                System.out.print("("+arr[i]+" "+arr[j]+")");
//                count++;
//            }
//            System.out.print(" ");
//        }
//
//        System.out.println("here it is count: "+count);
//
//        for(int i=0;i<arr.length;i++){
//            for(int j=i+1;j< arr.length;j++){
//                System.out.print("("+arr[i]+" "+arr[j]+")");
//                count2++;
//            }
//            System.out.print(" ");
//        }
//
//        System.out.println("here it is count2: "+count2);

    }
}
