// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n <= 1) return n;
        int lo = 1, hi = n;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(isBadVersion(mid)){
                if(!isBadVersion(mid-1)){
                    return mid;
                }
                else{
                    hi = mid-1;
                }
            }
            else{
                lo = mid+1;
            }
        }
        return -1;
    }
};