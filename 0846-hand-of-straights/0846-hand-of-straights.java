class Solution {
    public boolean findSucessors(int[]hand,int groupSize, int i, int n){
        int target = hand[i]+1;
        hand[i] = -1;
        int count = 1;
        i += 1;
        while(i < n && count < groupSize){
            if(hand[i] == target){
                target = hand[i]+1;
                hand[i] = -1;
                count++;
            }
            i++;
        }
        return count == groupSize;
    }
    public boolean isNStraightHand(int[] hand, int groupSize) {
        int n = hand.length;
        if(n%groupSize != 0) return false;
        Arrays.sort(hand);
        for(int i = 0; i < n; i++){
            if(hand[i] >= 0 && !findSucessors(hand,groupSize,i,n)){
                return false;
            }
        }
        return true;
    }
}