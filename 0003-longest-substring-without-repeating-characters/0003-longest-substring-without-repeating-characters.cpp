class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> dic;
        int longest = 0;
        int temp = 0;
        for(int i = 0; i < s.size(); i++){
            if(dic.contains(s[i])){
                temp = max(temp, dic[s[i]] + 1);
            }
            dic[s[i]] = i;
            longest = max(longest,i - temp + 1);
        }
        return longest;
    }
};