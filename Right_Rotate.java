//Program to right rotate an array element in Java.

public class RightRotate {

    public static int[] rightRotate (int[] nums, int k, int n) {
        int temp, i, j;

        for(i = 0; i < k; i++) {
            temp = nums[n-1];
            for (j = n-1; j > 0; j--)
                nums[j] = nums[j-1];
            nums[j] = temp;
        }
        return nums;
    }
    public static void main(String[] args) {
        int[] array = new int[] {-1, -100, 3, 99};
        int k = 2;
        int n = array.length;
        array = rightRotate(array, k, n);
        for(int i = 0; i < n; i++)
            System.out.print(array[i]+" ");
    }
}
