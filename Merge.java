public class MergeSort {
    public static void merge(int[] arr, int left, int mid, int right) {
        while (left <= mid && mid + 1 <= right) {
            if (arr[left] <= arr[mid + 1]) {
                left++;
            } else {
                int temp = arr[mid + 1];
                for (int i = mid; i >= left; i--) {
                    arr[i + 1] = arr[i];
                }
                arr[left] = temp;
                left++;
                mid++;
            }
        }
    }

    public static void mergeSort(int[] arr, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }

    public static void main(String[] args) {
        int[] arr = {5, 2, 8, 12, 25, 66, 32, 95, -2, 0};
        System.out.print("Original array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();

        mergeSort(arr, 0, arr.length - 1);

        System.out.print("Sorted array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
