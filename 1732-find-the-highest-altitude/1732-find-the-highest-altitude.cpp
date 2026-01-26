class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max1 = 0;
        int temp = max1;
        for(int i = 0; i < gain.size(); i++){
            temp  +=  gain[i];
            max1 = max(max1,temp);
        }
        return max1;
    }
};