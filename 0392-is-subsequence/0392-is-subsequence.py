class Solution(object):
    def isSubsequence(self, s, t):
        if not s:
            return True
        count = 0
        j = 0
        for i in t:
            if i == s[j]:
                count+=1
                j+=1
            if count == len(s):
                return True
        return False
        