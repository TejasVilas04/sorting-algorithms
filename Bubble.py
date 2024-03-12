def swap(x, y):
    temp = x
    x = y
    y = temp

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        swapped = False
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        if not swapped:
            break

# Test the function
arr = [5, 2, 8, 12, 25, 66, 32, 95, -2, 0]
print("Original Array:", arr)
bubble_sort(arr)
print("Sorted array:", arr)
