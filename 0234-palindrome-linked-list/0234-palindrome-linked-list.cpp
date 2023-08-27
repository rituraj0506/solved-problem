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
    bool isPalindrome(ListNode* head) {
       ListNode*sl=head,*fs=head;
        while(fs&&fs->next)
        {
            sl=sl->next;
            fs=fs->next->next;
        }
        
        ListNode*temp=sl;
        ListNode*newnode=NULL;
        while(temp!=NULL)
        {
            ListNode*next=temp->next;
            temp->next=newnode;
            newnode=temp;
            temp=next;
        }
        

        while(newnode!=NULL)
        {
            if(head->val!=newnode->val)
                return false;
            head=head->next;
            newnode=newnode->next;
        }
        return true;
    }
};