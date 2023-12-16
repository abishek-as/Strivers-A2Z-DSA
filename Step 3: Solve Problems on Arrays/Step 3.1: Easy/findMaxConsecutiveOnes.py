from typing import List


class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        ans = cnt = 0
        for i in range(0, len(nums)):
            cnt = cnt + 1 if nums[i] == 1 else 0
            ans = max(ans, cnt)
        return ans


obj = Solution()
print(obj.findMaxConsecutiveOnes(nums=[1, 1, 0, 1, 1, 1]))
print(obj.findMaxConsecutiveOnes(nums=[1, 0, 1, 1, 0, 1]))
