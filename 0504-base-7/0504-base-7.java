class Solution {
    public String convertToBase7(int num) {
        if(num == 0) return "0";
        String result = "";
        boolean flag = true;
        if(num < 0){
            flag = false;
            num = num*(-1);
        }
        while(num != 0){
            result = (num%7 + "") + result;
            num/=7;
        }
        if(!flag) result = "-" + result;
        return result;
    }
}