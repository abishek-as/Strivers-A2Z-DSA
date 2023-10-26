#include <bits/stdc++.h>
using namespace std;

// Follow the steps below to solve the given problem.

//     Rotate the array to left by one position. For that do the following:
//         Store the first element of the array in a temporary variable.
//         Shift the rest of the elements in the original array by one place.
//         Update the last index of the array with the temporary variable.
//     Repeat the above steps for the number of left rotations required.

/*Function to left rotate arr[] of size n by d*/
void Rotate(int arr[], int d, int n) {
    int p = 0;
    while (p < d) {
        int last = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
    }
}

// Driver code
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int N = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    // Function calling
    Rotate(arr, d, N);
    for (int i = 0; i < N; i++) cout << arr[i] << " ";

    return 0;
}
