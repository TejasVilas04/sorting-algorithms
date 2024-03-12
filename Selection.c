#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, minIndex;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(&arr[minIndex], &arr[i]);
        }
    }
}

int main() {
    int my_list[] = {5, 2, 8, 12, 25, 66, 32, 95, -2, 0};
    int n = sizeof(my_list) / sizeof(my_list[0]);

    printf("Original list: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", my_list[i]);
    }

    selectionSort(my_list, n);

    printf("\nSorted list: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", my_list[i]);
    }

    return 0;
}