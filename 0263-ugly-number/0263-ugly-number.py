class Solution(object):
    def isUgly(self, n):
        if n <= 0: 
            return False
        if n <= 6:
            return True
        while(n > 1):
            if(n % 5 == 0):
                n /= 5
            elif (n % 3 == 0):
                n/= 3
            elif (n % 2 == 0):
                n /= 2
            else:
                return False #None of acceptable cases passed
        return True