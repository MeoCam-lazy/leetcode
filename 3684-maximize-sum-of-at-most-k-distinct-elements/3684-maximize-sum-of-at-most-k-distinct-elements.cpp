class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int, greater<int>> mySet(nums.begin(), nums.end());
        vector<int> result;
        auto it = mySet.begin();
        for (int i = 0; i < k && it != mySet.end(); ++i) {
            result.push_back(*it); 
            ++it;
        }
        return result;
    }
};