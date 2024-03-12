function swap(arr, xp, yp) {
    [arr[xp], arr[yp]] = [arr[yp], arr[xp]];
}

function selectionSort(arr) {
    const n = arr.length;
    for (let i = 0; i < n - 1; i++) {
        let min_idx = i;
        for (let j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx !== i)
            swap(arr, min_idx, i);
    }
}

const arr = [5, 2, 8, 12, 25, 66, 32, 95, -2, 0];
console.log("Original array:", arr);
selectionSort(arr);
console.log("Sorted array:", arr);
