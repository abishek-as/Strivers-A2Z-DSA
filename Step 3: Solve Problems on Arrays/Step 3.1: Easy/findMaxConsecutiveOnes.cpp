#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(const vector<int>& nums) {
        int cnt = 0, ans = 0;
        for (size_t i = 0; i < nums.size(); i++) {
            cnt = (nums[i] == 1) ? cnt + 1 : 0;
            ans = max(ans, cnt);
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    Solution obj;
    int ans = obj.findMaxConsecutiveOnes(nums);
    cout << "The maximum  consecutive 1's are " << ans;
    return 0;
}