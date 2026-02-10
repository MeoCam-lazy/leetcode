class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        int n = 0;
        for(int i = columnTitle.size()-1; i >= 0; i--){
            sum = sum + (int)(columnTitle[i] - 'A' +1)*pow(26,n);
            n++;
        }
        return sum;
    }
};