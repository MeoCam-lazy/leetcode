class Solution(object):
    def findCenter(self, edges):
        x = {}
        for i in range (0,2):
            pair = edges[i]
            x[pair[0]] = x.get(pair[0],0) +1
            x[pair[1]] = x.get(pair[1],0) +1
        return max(x, key = x.get)
        