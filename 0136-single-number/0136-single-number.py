class Solution(object):
    def singleNumber(self, nums):
        x = 0
        for y in nums:
            x = x ^ y
        return x
        