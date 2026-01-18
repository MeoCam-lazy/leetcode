class Solution(object):
    def isPalindrome(self, x):
        if x < 0:
            return False
        a = x
        b = 0
        while x != 0:
            b = b*10 + x%10
            x = x // 10
        if a == b:
            return True
        return False
        