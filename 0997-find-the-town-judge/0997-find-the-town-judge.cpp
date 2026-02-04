class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> Trusted(n+1,0);
        vector<int> beTrusted(n+1,0);
        for(vector<int> pair : trust){
            Trusted[pair[0]]+=1;
            beTrusted[pair[1]]+=1;
        }
        for(int i = 1; i <= n; i++){
            if(Trusted[i] == 0 && beTrusted[i] == (n-1)){
                return i;
            }
        }
        return -1;
    }
};