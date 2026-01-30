class Solution(object):
    def divisorGame(self, n):
        dp = []
        dp.append(True)
        dp.append(False)
        for i in range (2,n+1):
            dp.append(not dp[i-1])
        return dp[n]
        