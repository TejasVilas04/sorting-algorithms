def selectionSort(arr):
    n = len(arr)
    for i in range(n - 1):
        min_idx = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]

arr = [5, 2, 8, 12, 25, 66, 32, 95, -2, 0]
print("Original array:", arr)
selectionSort(arr)
print("Sorted array:", arr)
