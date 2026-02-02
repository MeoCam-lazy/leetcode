class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count = 0;
        int lo = 0, hi = people.size()-1;
        while(lo <= hi){
            if(people[lo] + people[hi] <= limit){
                count++;
                lo+=1;
                hi -=1;
            }
            else{
                count++;
                hi--;
            }
        }
        return count;
    }
};