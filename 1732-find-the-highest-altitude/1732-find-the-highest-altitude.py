class Solution(object):
    def largestAltitude(self, gain):
        maxx = 0
        temp = 0
        for i in range(0, len(gain)):
            temp += gain[i]
            maxx = temp if maxx < temp else maxx
        return maxx 
    
        