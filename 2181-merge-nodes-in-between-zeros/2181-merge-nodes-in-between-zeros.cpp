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
    ListNode* mergeNodes(ListNode* head) {
        int sum=0;
        if(head->next==NULL) return NULL;
       ListNode*temp=head->next;
        while(temp->val!=0)
        {
            sum+=temp->val;
            temp=temp->next;
        }
        head->next->val=sum;
       
        head->next->next=mergeNodes(temp);
        
         return head->next;;
    }
};