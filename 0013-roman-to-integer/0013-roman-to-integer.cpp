class Solution {
public:
    int romanToInt(string s) {
        int Value = 0;
        unordered_map<char, int> umap = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M', 1000}
        };
        for(int i = 0; i < s.size()-1; i++){
            if(umap[s[i]] < umap[s[i+1]]) Value = Value - umap[s[i]];
            else Value += umap[s[i]];
        }
        return Value + umap[s[s.size()-1]];
    }
};