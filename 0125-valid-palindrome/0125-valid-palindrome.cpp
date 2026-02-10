class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){
                temp += tolower(s[i]);
            }
        }
        int l = temp.size();
        for(int i = 0; i < l/2; i++){
            if(temp[i] != temp[l-i-1]) return false;
        }
        return true;
    }
};