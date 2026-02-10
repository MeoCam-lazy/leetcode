class Solution {
    public boolean isPalindrome(String s) {
        String temp = "";
        for(int i = 0; i < s.length(); i++){
            if (Character.isLetterOrDigit(s.charAt(i))){
                temp += Character.toLowerCase(s.charAt(i));
            }
        }
        int l = temp.length();
        for(int i = 0; i < l/2; i++){
            if(temp.charAt(i) != temp.charAt(l-1-i)) return false;
        }
        return true;
    }
}