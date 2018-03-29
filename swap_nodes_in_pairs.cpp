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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode *pre = dummy;
        while (pre->next && pre->next->next) {
            ListNode *cur = pre->next, *next = pre->next->next;
            pre->next = next;
            cur->next = next->next;
            next->next = cur;
            pre = cur;
        }
        head = dummy->next;
        delete dummy;
        return head;
    }
};