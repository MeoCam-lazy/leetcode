class Solution(object):
    def numRescueBoats(self, people, limit):
        people.sort()
        count = 0
        lo = 0
        hi = len(people) -1
        while(lo <= hi):
            if(people[lo] + people[hi] <= limit):
                count+=1
                lo+=1
                hi -=1
            else:
                count+=1
                hi-=1
        return count
        