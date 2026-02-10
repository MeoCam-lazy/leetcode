class Solution(object):
    def reverseVowels(self, s):
        s = list(s)
        string = 'ueoaiUEOAI'
        lo = 0
        hi = len(s) - 1
        while(lo < hi):
            while(lo <= hi and string.find(s[lo]) == -1):
                lo += 1
            while(lo <= hi and string.find(s[hi]) == -1):
                hi -= 1
            if(lo < hi):
                s[lo],s[hi] = s[hi],s[lo]
                lo += 1
                hi -= 1
        return "".join(s)
        