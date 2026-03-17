class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> ms;
        for(char c: magazine){
            ms[c]++;
        }
        for(char c: ransomNote){
            if(ms[c] <= 0) return false;
            ms[c]--;
        }
        return true;
    }
};