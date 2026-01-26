class Solution(object):
    def heightChecker(self, heights):
        expected = sorted(heights)
        count = 0
        for i in range(0,len(heights)):
            if expected[i] != heights[i]:
                count +=1
        return count
        