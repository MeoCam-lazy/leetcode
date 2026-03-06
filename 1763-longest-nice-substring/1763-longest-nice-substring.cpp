class Solution {
public:
    bool isNice(string sub){
        if(sub.empty()) return false;
        for(char c: sub){
            char lower = (c >= 'a') ? c : c + 32;
            char upper = (c < 'a') ? c : c - 32;
            if(sub.find(lower) == string::npos || sub.find(upper) == string::npos)
                return false;
        }
        return true;

    }
    string longestNiceSubstring(string s) {
        string result = "";
        int n = s.size();
        for(int i = 0; i< n; i++){
            for(int j = i; j < n; j++){
                string sub = s.substr(i,j - i + 1);
                if(isNice(sub) && sub.size() > result.size()){
                    result = sub;
                }
            }
        }
        return result;
    }
};