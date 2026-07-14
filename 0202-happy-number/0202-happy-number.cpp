class Solution {
public:

    int tt(int n){
        int sum = 0;
        while(n != 0){
            int du = n%10;
            sum += du*du;
            n/= 10;
        }
        return sum;
    }
    bool isHappy(int r) {
        int slow = r;
        int fast = tt(r);
        
        while(fast != 1 && slow != fast) {
            slow = tt(slow);       
            fast = tt(tt(fast));   
        }
        
        return fast == 1;
    }
};