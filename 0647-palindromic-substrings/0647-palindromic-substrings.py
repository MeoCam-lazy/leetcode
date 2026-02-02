class Solution(object):
    def countSubstrings(self, s):
        res = 0 
        for i in range(0, len(s)):
            res += self.count_palindrome(s,i,i)
            res += self.count_palindrome(s,i,i+1)
        return res
    def count_palindrome(self,s,left,right):
        count = 0
        while(left >= 0 and right < len(s) and s[left]==s[right]):
            count+=1
            left-=1
            right+=1
        return count
        