// Question: https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/

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
    ListNode* doubleIt(ListNode* head) {
        ListNode *p = head;
        if(p == head && p->val >= 5) {
            head = new ListNode(1, head);
        }

        while(p != NULL) {
            p->val *= 2;
            if(p->next && p->next->val >= 5) {
                p->val++;
            }
            
            p->val %= 10;
            p = p->next;
        }

        return head;
    }
};
