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

    void addback(ListNode *head, int val){
        if(head == nullptr){
            head->val = val;
            head->next = nullptr;
            return;
        }
        ListNode*track = head;
        ListNode *rs = new ListNode(val);
        while(track->next != nullptr) track = track->next;
        track->next = rs;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = new ListNode();
        ListNode *i = list1;
        ListNode *j = list2;
        while(i || j){
            while(i && j){
                if(i->val < j->val){
                    addback(head,i->val);
                    i = i->next;
                }
                else{
                    addback(head,j->val);
                    j = j -> next;
                }
            }
            while(i){
                addback(head,i->val);
                i = i->next;
            }
            while(j){
                addback(head,j->val);
                j = j->next;
            }
        }
        return head->next;
    }
};