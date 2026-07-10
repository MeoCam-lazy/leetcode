class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string rl = "";
        for(int i = 0; i < numRows; i++){
            for(int j = i; j < s.size(); j+= 2*(numRows -1)){
                rl += s[j];
                if(i > 0 && i < numRows -1 && j + 2*numRows - 2 - 2*i < s.size()){
                    rl += s[j + 2*numRows - 2 - 2* i];
                }
            }
        }
        return rl;
    }
};