class Solution {
public:
    
    bool isVowel(char c) {
        char low = tolower(c);
        return low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u';
    }
    string reverseVowels(string s) {
        //use two pointer to search. 
        int lo = 0;
        int hi = s.length()-1;
        while(lo < hi){
            while (lo < hi && !isVowel(s[lo])) {
                lo++;
            }
            while (lo < hi && !isVowel(s[hi])) {
                hi--;
            }
            if (lo < hi) {
                swap(s[lo], s[hi]);
                lo++;
                hi--;
            }

        }
        return s;
    }
    
};