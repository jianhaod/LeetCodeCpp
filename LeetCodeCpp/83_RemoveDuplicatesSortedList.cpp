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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* loopptr = head;
        if((loopptr == NULL) || (loopptr->next == NULL)) {
            return head;
        }
        ListNode* current = loopptr->next;
        int mark = loopptr->val;
        
        while(current) {
            if(current->val == mark) {
                loopptr->next = current->next;
                current = loopptr->next;
            } else {
                mark = current->val;
                current = current->next;
                loopptr = loopptr->next;
            }

        }
        return head;
    }
};