# Python program to rotate an array by d elements

# Follow the steps below to solve the given problem.

#     Rotate the array to left by one position. For that do the following:
#         Store the first element of the array in a temporary variable.
#         Shift the rest of the elements in the original array by one place.
#         Update the last index of the array with the temporary variable.
#     Repeat the above steps for the number of left rotations required.


# Function to left rotate arr[] of size n by d
def Rotate(arr, d, n):
    p = 0
    while (p < d):
        last = arr[0]
        for i in range(n - 1):
            arr[i] = arr[i + 1]
        arr[n - 1] = last
        p = p + 1


# Driver code
arr = [1, 2, 3, 4, 5, 6, 7]
N = len(arr)
d = 2

# Function calling
Rotate(arr, d, N)
for i in range(N):
    print(arr[i], end=" ")
