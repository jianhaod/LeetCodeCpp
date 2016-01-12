/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* ptr = NULL;
        if((head == NULL) || (head->next == NULL)) {
            return head;
        } 
        while(head != NULL) {
            ptr = head->next;
            head->next = pre;
            pre = head;
            head = ptr;
        }
        return pre;
    }
};