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
    ListNode*mergetwolist(ListNode*l1,ListNode*l2)
    {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode*result;
        if(l1->val<=l2->val)
        {
         result=l1;
            result->next=mergetwolist(l1->next,l2);
        }
        else{
           result=l2;
            result->next=mergetwolist(l2->next,l1);
        }
        return result;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
     if(lists.empty()){
        return NULL;
    }
        
    while(lists.size() > 1){
        lists.push_back(mergetwolist(lists[0], lists[1]));
        lists.erase(lists.begin()); //  removing first two ele from list becoz repeadtly merging 
       lists.erase(lists.begin());
    }
    return lists.front();
    }
};