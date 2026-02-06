class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize != 0) return false;
        map<int,int> cards;
        for(int x: hand){
            cards[x]++;
        }
        for(auto i = cards.begin(); i != cards.end(); i++){
            int currentcard = i->first;
            int count = i->second;
            if(count == 0) continue;
            for(int j = 0; j < groupSize; j++){
                int new_card = currentcard+j;
                if(cards[new_card] < count) return false;
                cards[new_card] -= count;
            }
        }
        return true;
    }
};