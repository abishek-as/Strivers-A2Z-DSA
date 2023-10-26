#include <iostream>
#include <vector>

using namespace std;

bool isSorted(vector<int>& arr) {
    for (unsigned int i = 0; i < arr.size() - 1; i++)
        if (arr[i] > arr[i + 1]) return false;

    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    isSorted(arr) ? cout << "True" : cout << "False";
    return 0;
}