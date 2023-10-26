#include <iostream>
#include <set>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    set<int> s;
    for (unsigned int i = 0; i < nums.size(); i++) {
        if (s.find(nums[i]) != s.end())
            continue;
        else
            s.insert(nums[i]);
    }
    for (auto& i : s) cout << i << " ";
    return s.size();
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int k = removeDuplicates(arr);
    cout << "\nAns " << k;
    return 0;
}