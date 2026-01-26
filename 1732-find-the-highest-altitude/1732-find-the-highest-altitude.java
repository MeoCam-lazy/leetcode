class Solution {
    public int largestAltitude(int[] gain) {
        int maxx = 0;
        int temp = 0;
        for(int i =0; i< gain.length; i++){
            temp += gain[i];
            maxx = maxx > temp ? maxx: temp;
        }
        return maxx;
    }
}