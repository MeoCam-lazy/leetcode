class Solution {
    public boolean isUgly(int n) {
        if(n <= 0) return false;
        if(n <= 6) return true;
        //as we know 1,2,3,5 passed. And also 4(= 2x2) and 6(=2x3) passed too
        //Now we will use a while loop to devide our original input. If n is full of factors 2,3 and 5 then everytime i devide it by its %(like %5 == 0 -> /= 5) it should return a devisible output too untill n reach 1. And if any stage n is not devisible by 5/3/2 then return false
        while(n > 1){
            if(n % 5 == 0) n/=5;
            else if(n%3 == 0) n/= 3;
            else if (n%2 == 0) n/= 2;
            else return false;
        }
        return true;
    }
}