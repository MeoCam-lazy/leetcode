class Solution(object):
    def isPalindrome(self, s):
        temp = ""
        for char in s:
            if char.isalnum():
                temp += char.lower()
        l = len(temp)
        for i in range(0,l/2):
            if temp[i] != temp[l-i-1]:
                return False
        return True 

        