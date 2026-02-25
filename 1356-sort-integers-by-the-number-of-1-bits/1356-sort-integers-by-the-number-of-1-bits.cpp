class Solution {
public:
    static int countbits(int n){
        int count = 0;
        for(int i = 0; i < 32; i++){
            if((n & (1 << i)) != 0){ 
                count++;
            }
        }
        return count;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int a, int b) {
            int bitA = countbits(a);
            int bitB = countbits(b);
            if (bitA == bitB) return a < b;
            return bitA < bitB;
        });
        
        return arr;
    }
};