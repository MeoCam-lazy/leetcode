class Solution(object):
    def isNStraightHand(self, hand, groupSize):
        n = len(hand)
        if n % groupSize != 0:
            return False
        hand.sort(reverse = False)
        for i in range(0,n):
            if(hand[i] >= 0 and not self.findSucessors(hand,groupSize,i,n)):
                return False
        return True
    def findSucessors(self,hand,groupSize,i,n):
        target = hand[i] + 1
        hand[i] = -1
        count = 1
        i = i + 1
        while(count < groupSize and i < n):
            if target == hand[i]:
                target = hand[i] + 1
                hand[i] = -1
                count+=1
            i += 1
        return count == groupSize

        