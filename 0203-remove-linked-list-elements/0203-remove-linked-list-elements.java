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
    public ListNode removeElements(ListNode head, int val) {
        while(head != null && head.val == val){
            head=head.next;
        }
        ListNode track = head;
        while(track != null){
            if(track.next != null && track.next.val == val){
                track.next = track.next.next;
            }
            else
            track = track.next;
        }
        return head;
    }
}