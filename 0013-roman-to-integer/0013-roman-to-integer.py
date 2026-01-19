class Solution:
    def romanToInt(self, s: str) -> int:
        symbol = {'I':1, 'V':5,'X': 10,'L':50,'C':100,'D':500,'M':1000}
        Value = 0
        n = len(s)
        for i in range(0, n-1 ):
            if symbol[s[i]] < symbol[s[i+1]]:
                Value -= symbol[s[i]]
            else:
                Value += symbol[s[i]]
        Value += int(symbol[s[n-1]])
        return Value