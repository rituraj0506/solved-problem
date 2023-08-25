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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*sl=head,*fs=head;
        while(n--)
        {
            sl=sl->next;
        }
       if(sl==NULL) return head->next;
        while(sl->next!=NULL)
        {
            fs=fs->next;
            sl=sl->next;
        }
        fs->next=fs->next->next;
        return head;
    }
};