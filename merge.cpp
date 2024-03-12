#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
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

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {5, 2, 8, 12, 25, 66, 32, 95, -2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
