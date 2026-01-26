class Solution(object):
    def missingNumber(self, nums):
        n = len(nums)
        sum_i = n*(n+1)/2
        for i in range(0,n):
            sum_i -= nums[i]
        return sum_i
        