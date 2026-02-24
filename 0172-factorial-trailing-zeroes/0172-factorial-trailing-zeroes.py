class Solution(object):
    def solution(self,n, count):
        if n < 5:
            return
        count[0] += n/5
        self.solution(n/5,count)
    def trailingZeroes(self, n):
        count = [0]
        self.solution(n,count)
        return count[0]
        