class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i = 0; i < flowerbed.size(); i++){
            bool isLeftEmpty = (i == 0 || flowerbed[i-1] == 0);
            bool isRightEmpty = (i == flowerbed.size() - 1 || flowerbed[i+1] == 0);
            if(isLeftEmpty && isRightEmpty && flowerbed[i] == 0){
                n--;
                flowerbed[i] = 1;
            }
        }
        return n <= 0;
    }
};