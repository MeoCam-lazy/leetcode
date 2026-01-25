class Solution(object):
    def minimumDifference(self, nums, k):
        if k <= 1:
            return 0
        nums.sort()
        mins = float('inf')
        for i in range(len(nums) - k + 1):
            mins = min(mins, nums[i+k-1]- nums[i])
        return mins