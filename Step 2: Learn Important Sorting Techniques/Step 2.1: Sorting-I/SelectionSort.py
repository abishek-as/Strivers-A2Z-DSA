def selectionSort(arr, n):
    for i in range(0, n):
        min = i
        for j in range(i+1, n):
            if arr[j] < arr[min]:
                min = j
        arr[i], arr[min] = arr[min], arr[i]
    return arr


n = int(input())
arr = [int(x) for x in input().split()]
selectionSort(arr, n)
print(arr)
