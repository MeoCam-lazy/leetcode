class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int a = x;
        long long b = 0;
        while(a != 0){
            int du = a%10;
            b = b*10+ du;
            a /= 10;
        }
        return (b == x)?(true):(false);
    }
};