class Solution {
public:
    int longestPalindrome(string s) {
        /*
        @Problem summary:
        - You are given an string S, return the longest palindrome can make from characters in s
        @Apporach
        - This is truly like a lego game. A palindrome is a string that reads the same forward and backward. We will count number of all disctinct characters in s, and add up the result whenever number of that character is divisable by 2, else if that number is not 1, then we can subtract it by 1 and then it will become an even number. And remember the mid number of the palindrome con sit alone so remember to add 1 whenever has odd number of char!
        */
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