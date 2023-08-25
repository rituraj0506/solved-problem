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
//         1st Approch
//         int c=0;
//         ListNode*temp=head;
//        while(temp!=NULL)
//        {
//            c++;
//            temp=temp->next;
//        }
//         int sz=c/2;
//         while(sz>0)
//         {
//             sz--;
//             head=head->next;
//         }
//         return head;
        
//             2nd Approach 
            
        ListNode*sl=head,*fs=head;
        while(fs&&fs->next)
        {
            fs=fs->next->next;
            sl=sl->next;
        }
        return sl;
    }
};