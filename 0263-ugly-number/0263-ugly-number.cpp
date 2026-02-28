class Solution {
public:
    bool check(int n){
        if(n == 2 || n == 3 || n == 5){
            return true;
        }
        if(n == 0) return false;
        else if(n % 5 == 0){
            return isUgly(n/5);
        }
        else if(n % 3 == 0){
            return isUgly(n/3);
        }
        else if(n % 2 == 0) return isUgly(n/2);
        return false;
    }
    bool isUgly(int n) {
        if(n == 1) return true;
        return check(n);
    }
};