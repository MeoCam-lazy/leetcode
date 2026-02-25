/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr;
        while(head->next != nullptr && head -> val == head->next -> val){
            ListNode *temp = head;
            head = head -> next;
            delete temp;
        }
        ListNode *track = head;
        while(track != nullptr && track -> next != nullptr){
            if(track -> next -> val == track-> val){
                ListNode *temp = track->next;
                track->next = track->next->next;
            }
            else track = track->next;
        }
        return head;
    }
};