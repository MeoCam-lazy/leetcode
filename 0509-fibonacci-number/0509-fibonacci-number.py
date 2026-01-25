class Solution(object):
    def fib(self, n):
        if n < 2:
            return n
        fibo = []
        fibo.append(0)
        fibo.append(1)
        for i in range(2,n+1):
            temp = fibo[i-1] + fibo[i-2]
            fibo.append(temp)
        return fibo[n]
        