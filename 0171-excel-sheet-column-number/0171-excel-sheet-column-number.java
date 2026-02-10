class Solution {
    public int titleToNumber(String columnTitle) {
        int sum = 0;
        int n = 0;
        for(int i = columnTitle.length() - 1; i >= 0; i--){
            sum += (int)(columnTitle.charAt(i) - 'A' + 1)*Math.pow(26,n);
            n++;
        }
        return sum;
    }
}