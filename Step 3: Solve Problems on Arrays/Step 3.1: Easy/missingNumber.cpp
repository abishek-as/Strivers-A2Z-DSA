#include <bits/stdc++.h>
using namespace std;

int missingNumber(const vector<int>& a, int N) {
    // Summation of first N numbers:
    int sum = (N * (N + 1)) / 2;

    // Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) s2 += a[i];

    return sum - s2;
}

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
