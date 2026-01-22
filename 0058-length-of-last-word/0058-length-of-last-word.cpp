class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        int line = 0;
        string test;
        while(ss >> test){
            line = test.length();
        }
        return line;
    }
};