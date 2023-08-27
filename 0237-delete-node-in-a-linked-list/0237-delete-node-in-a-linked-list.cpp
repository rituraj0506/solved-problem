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
    void deleteNode(ListNode* node) {
// here i dont delete the node i directly assign to the next node val and link to next node
        node->val=node->next->val;
        node->next=node->next->next;
    }
};