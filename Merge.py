def merge(arr, left, mid, right):
    while left <= mid and mid + 1 <= right:
        if arr[left] <= arr[mid + 1]:
            left += 1
        else:
            temp = arr[mid + 1]
            for i in range(mid, left - 1, -1):
                arr[i + 1] = arr[i]
            arr[left] = temp
            left += 1
            mid += 1

def merge_sort(arr, left, right):
    if left < right:
        mid = left + (right - left) // 2
        merge_sort(arr, left, mid)
        merge_sort(arr, mid + 1, right)
        merge(arr, left, mid, right)


arr = [5, 2, 8, 12, 25, 66, 32, 95, -2, 0]
print("Original array:", arr)

merge_sort(arr, 0, len(arr) - 1)
print("Sorted array:", arr)
