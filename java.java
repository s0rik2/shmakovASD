public class ArraySum {
    public static int arraySum(int[] arr, int size) {
        if (size == 0) return 0;
        if (size == 1) return arr[0];
        return arr[size - 1] + arraySum(arr, size - 1);
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int size = arr.length;
        System.out.println(arraySum(arr, size));
    }
}
