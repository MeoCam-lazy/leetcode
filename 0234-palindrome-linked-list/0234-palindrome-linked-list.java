/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        List<Integer> rs = new ArrayList<>();
        while(head != null){
            rs.add(head.val);
            head = head.next;
        }
        int s = rs.size();
        for(int i = 0; i < s/2; i++){
            if(rs.get(i) != rs.get(s-i-1)) return false;
        }
        return true;

    }
}