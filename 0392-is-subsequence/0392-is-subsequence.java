class Solution {
    public boolean isSubsequence(String s, String t) {
        int count = 0;
        int j = 0;
        for(int i = 0; i < t.length; i++){
            if(t[i] == s[j]){
                if(j < s.length) j++;
                ++count;
            }
        }
    }
}