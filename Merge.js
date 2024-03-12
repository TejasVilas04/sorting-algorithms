function merge(arr, left, mid, right) {
    while (left <= mid && mid + 1 <= right) {
        if (arr[left] <= arr[mid + 1]) {
            left++;
        } else {
            const temp = arr[mid + 1];
            for (let i = mid; i >= left; i--) {
                arr[i + 1] = arr[i];
            }
            arr[left] = temp;
            left++;
            mid++;
        }
    }
}

function mergeSort(arr, left, right) {
    if (left < right) {
        const mid = left + Math.floor((right - left) / 2);
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

const arr = [5, 2, 8, 12, 25, 66, 32, 95, -2, 0];
console.log("Original array:", arr);

mergeSort(arr, 0, arr.length - 1);

console.log("Sorted array:", arr);