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
    ListNode *detectCycle(ListNode *head) {
        ListNode*sl=head;
        ListNode*fs=head;
        int flag=0;
        while(fs&&fs->next)
        {
            sl=sl->next;
            fs=fs->next->next;
            if(sl==fs)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            fs=head;
            while(sl!=fs)
            {
                sl=sl->next;
                fs=fs->next;
            }
            return sl;
        }
        return NULL;
    }
};