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
    int pairSum(ListNode* head) {
       ListNode*temp=head;
        vector<int>v;
        int maxi=-1e9;
        while(temp!=NULL)
        {
           v.push_back(temp->val); 
            temp=temp->next;
        }
        int n=v.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=v[i]+v[n-i-1];
              maxi=max(maxi,ans);
        }
        return maxi;
    }
};