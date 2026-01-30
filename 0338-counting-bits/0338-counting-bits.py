class Solution(object):
    def countBits(self, n):
        dp = []
        dp.append(0)
        sub = 1
        for i in range(1,n+1):
            if sub * 2 == i:
                sub=i
            dp.append(dp[i-sub]+1)
        return dp
        