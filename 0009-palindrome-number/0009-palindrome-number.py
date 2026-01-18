class Solution(object):
    def isPalindrome(self, x):
        x_str = str(x)
        if str(x)[::-1] == x_str:
            return True
        return False
        