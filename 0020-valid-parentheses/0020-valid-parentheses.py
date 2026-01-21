class Solution(object):
    def isValid(self, s):
        stack = []
        dic = {"(":")", "{":"}", "[":"]"}

        for char in s:
            if char in dic.keys():
                stack.append(char);
            elif char in dic.values():
                if not stack or dic[stack.pop()] != char:
                    return False
        return not stack


        