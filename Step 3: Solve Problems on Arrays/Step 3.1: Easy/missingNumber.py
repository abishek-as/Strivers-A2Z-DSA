from typing import List


class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        return (len(nums) * (len(nums) + 1)) // 2 - sum(nums)
        # for i in range(0, len(nums) + 1):
        #     if i not in nums:
        #         return i


obj = Solution()
print(obj.missingNumber(nums=[3, 0, 1]))
print(obj.missingNumber(nums=[0, 1]))
print(obj.missingNumber(nums=[9, 6, 4, 2, 3, 5, 7, 0, 1]))
