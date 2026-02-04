class Solution(object):
    def findJudge(self, n, trust):
        count = [0]*(n+1)
        for pair in trust:
            count[pair[0]]-=1
            count[pair[1]]+=1
        for i in range(1,n+1):
            if(count[i] == n-1):
                return i
        return -1
        