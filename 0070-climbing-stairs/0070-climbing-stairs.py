class Solution(object):
    def climbStairs(self, n):
        if n < 3:
            return n
        prev1 = 1
        prev2 = 2
        curr = 0
        for i in range(3,n+1):
            curr = prev1 + prev2
            prev1 = prev2
            prev2 = curr
        return curr
        