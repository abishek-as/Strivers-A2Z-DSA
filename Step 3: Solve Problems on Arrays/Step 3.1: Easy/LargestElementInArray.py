def LargestElementInArray(arr, n):
    max = arr[0]
    for i in range(0, n):
        if arr[i] > max:
            max = arr[i]
    return max


if __name__ == "__main__":
    n = int(input())
    arr = [int(x) for x in input().split()]
    print(LargestElementInArray(arr, n))
    print("")
