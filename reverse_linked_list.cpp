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
        // iteratively
        // if (head && head->next) {
        //     ListNode *pre = head, *cur = head->next, *next = nullptr;
        //     head->next = nullptr;
        //     while (cur != nullptr) {
        //         next = cur->next;
        //         cur->next = pre;
        //         pre = cur;
        //         cur = next;
        //     }
        //     return pre;
        // }
        // return head;
        
        // recursively
        if (head && head->next) {
            ListNode* tail = reverseList(head->next);
            ListNode* next = head->next;
            next->next = head;
            head->next = nullptr;
            return tail;
        }
        return head;
    }
};