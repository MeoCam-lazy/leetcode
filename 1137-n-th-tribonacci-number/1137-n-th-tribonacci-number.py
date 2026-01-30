class Solution(object):
    def tribonacci(self, n):
        if n <= 1:
            return n
        dp = []
        dp.extend([0,1,1])
        for i in range(3, n+1):
            dp.append(dp[i-1] + dp[i-2] + dp[i-3])
        return dp[n]
        