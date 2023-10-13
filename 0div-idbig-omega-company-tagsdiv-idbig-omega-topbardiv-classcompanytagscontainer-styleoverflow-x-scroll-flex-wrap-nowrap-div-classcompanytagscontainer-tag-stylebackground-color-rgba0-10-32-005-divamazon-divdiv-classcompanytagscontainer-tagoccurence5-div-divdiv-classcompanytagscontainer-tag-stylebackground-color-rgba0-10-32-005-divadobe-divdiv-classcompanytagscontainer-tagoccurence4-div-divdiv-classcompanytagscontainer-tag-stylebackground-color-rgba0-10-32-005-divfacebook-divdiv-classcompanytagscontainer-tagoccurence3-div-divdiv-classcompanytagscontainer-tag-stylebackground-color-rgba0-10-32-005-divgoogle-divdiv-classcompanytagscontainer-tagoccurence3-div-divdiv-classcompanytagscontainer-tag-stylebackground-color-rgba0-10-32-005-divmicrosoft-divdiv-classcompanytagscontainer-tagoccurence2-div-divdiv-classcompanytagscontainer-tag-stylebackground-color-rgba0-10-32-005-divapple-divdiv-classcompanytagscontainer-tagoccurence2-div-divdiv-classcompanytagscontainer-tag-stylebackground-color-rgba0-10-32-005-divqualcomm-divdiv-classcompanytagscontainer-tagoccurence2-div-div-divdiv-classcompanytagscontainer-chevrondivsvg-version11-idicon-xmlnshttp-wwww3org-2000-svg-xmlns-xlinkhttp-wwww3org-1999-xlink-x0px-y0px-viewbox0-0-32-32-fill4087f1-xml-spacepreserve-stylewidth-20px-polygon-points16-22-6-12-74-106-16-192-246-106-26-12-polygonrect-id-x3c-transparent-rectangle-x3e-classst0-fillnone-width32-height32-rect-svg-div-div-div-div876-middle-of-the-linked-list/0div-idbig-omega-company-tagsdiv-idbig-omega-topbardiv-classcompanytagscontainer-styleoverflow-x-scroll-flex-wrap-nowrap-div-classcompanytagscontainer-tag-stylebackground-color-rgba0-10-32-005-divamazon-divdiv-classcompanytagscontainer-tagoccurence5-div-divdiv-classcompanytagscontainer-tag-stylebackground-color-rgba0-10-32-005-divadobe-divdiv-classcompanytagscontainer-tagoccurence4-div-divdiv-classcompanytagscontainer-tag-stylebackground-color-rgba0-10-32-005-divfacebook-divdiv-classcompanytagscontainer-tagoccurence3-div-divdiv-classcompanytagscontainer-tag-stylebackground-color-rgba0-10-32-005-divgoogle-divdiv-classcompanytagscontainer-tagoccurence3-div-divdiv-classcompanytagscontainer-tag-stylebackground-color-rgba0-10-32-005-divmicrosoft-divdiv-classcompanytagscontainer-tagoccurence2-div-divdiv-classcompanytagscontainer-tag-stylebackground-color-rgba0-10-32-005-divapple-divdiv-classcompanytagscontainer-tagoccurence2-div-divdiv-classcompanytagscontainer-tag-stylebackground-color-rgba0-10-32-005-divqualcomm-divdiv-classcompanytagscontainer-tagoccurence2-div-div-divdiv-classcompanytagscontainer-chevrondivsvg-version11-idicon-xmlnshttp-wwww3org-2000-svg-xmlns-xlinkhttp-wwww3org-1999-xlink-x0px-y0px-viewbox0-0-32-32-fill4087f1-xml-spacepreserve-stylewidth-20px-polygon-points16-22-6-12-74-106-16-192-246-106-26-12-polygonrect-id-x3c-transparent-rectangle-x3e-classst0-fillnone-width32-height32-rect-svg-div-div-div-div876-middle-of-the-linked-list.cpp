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
    ListNode* middleNode(ListNode* head) {
        // 1st Approach
        // ListNode*temp=head;
        // int c=0;
        // while(temp!=NULL)
        // {
        //    c++;
        //   temp=temp->next;
        // }
        // int sz=c/2;
        // while(sz>0)
        // {
        //     sz--;
        //     head=head->next;
        // }
        // return head;
        if(head==NULL) return NULL;
        ListNode*sl=head;
        ListNode*fs=head;
        while(fs&&fs->next)
        {
            sl=sl->next;
            fs=fs->next->next;
          
        }
         return sl;
        
    }
};