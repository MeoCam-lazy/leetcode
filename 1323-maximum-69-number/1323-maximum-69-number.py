class Solution(object):
    def maximum69Number (self, num):
        fnum = list(str(num))
        for i in range(0, len(fnum)):
            if fnum[i] == '6':
                fnum[i] = '9'
                break
        return (int)("".join(fnum))
        