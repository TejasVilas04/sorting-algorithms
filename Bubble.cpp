#include <iostream>
#include <vector>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(std::vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++)    
        for (int j = 0; j < n-i-1; j++)  
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

int main() {
    std::vector<int> arr = {5, 2, 8, 12, 25, 66, 32, 95, -2, 0};
    bubbleSort(arr);
    std::cout << "Sorted array: ";
    for (int i : arr)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}