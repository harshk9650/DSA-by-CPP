package Arrays;

public class Main {

    public static void mergeArrays(int[] a, int[] b) {

        // Write your code here


    }

    public static void main(String[] args) {

        int[] a = {2, 4, 7, 10};
        int[] b = {2, 3};

        
        mergeArrays(a, b);

        System.out.println("Array a:");
        for (int x : a) {
            System.out.print(x + " ");
        }

        System.out.println("\nArray b:");
        for (int x : b) {
            System.out.print(x + " ");
        }
    }
}
