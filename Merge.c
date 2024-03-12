#include <stdio.h>

// Merge two subarrays of arr[]
// First subarray is arr[left]
// Second subarray is arr[mid+1]
void merge(int arr[], int left, int mid, int right) {
    // Merge the sorted subarrays into a sorted array
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

// Recursive function to perform merge sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {5, 2, 8, 12, 25, 66, 32, 95, -2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    mergeSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}