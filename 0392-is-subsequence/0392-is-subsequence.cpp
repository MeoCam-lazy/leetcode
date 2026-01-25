class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int count = 0;
        int j = 0;
        for(int i = 0; i < t.size(); i++){
            if(t[i] == s[j]){
                count++;
                j++;
            }
        }
        return count == n;
    }
};