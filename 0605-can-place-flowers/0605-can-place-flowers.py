class Solution(object):
    def canPlaceFlowers(self, flowerbed, n):
        for i in range(0, len(flowerbed)):
            isLeftEmpty = (i == 0 or flowerbed[i-1] == 0)
            isRightEmpty = (i == len(flowerbed) - 1 or flowerbed[i+1] == 0)
            if(isLeftEmpty and isRightEmpty and flowerbed[i] == 0):
                flowerbed[i] = 1
                n -= 1
        return n <= 0
        