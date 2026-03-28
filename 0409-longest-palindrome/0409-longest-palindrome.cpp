class Solution {
public:
    int longestPalindrome(string s) {
        int result = 0;
        map<char,int> tb;
        bool flag = false;
        for(char c: s){
            tb[c]++;
        }
        int count;
        for(pair x: tb){
            count = x.second;
            if(count % 2 == 0) result += count;
            else {
                result += count - 1;
                flag = true;
            }
        }
        if(flag) result += 1;
        return result;
    }
};