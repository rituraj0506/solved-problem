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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
     ListNode*kstat=head;
        for(int i=0;i<k-1;i++)
        {
            kstat=kstat->next;
        }
        ListNode*ptr=head;
        ListNode*t=kstat;
        while(t->next!=NULL)
        {
            ptr=ptr->next;
            t=t->next;
        }
        swap(kstat->val,ptr->val);
        return head;
    }
};