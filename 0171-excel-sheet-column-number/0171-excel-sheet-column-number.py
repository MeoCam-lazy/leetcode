class Solution(object):
    def titleToNumber(self, columnTitle):
        lsum = 0
        for i in range(0, len(columnTitle)):
            lsum = lsum*26 + (ord(columnTitle[i]) - 64)
        return lsum   