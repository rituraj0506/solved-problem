/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int check( vector<int>&ans,int k)
    {
        unordered_map<int,int>m;
        int n=ans.size();
        for(int i=0;i<n;i++)
        {
            if(m.find(k-ans[i])!=m.end())
            {
                return true;
            }
            m[ans[i]]=i;
        }
        return false;
    }
    void preorder(TreeNode*root,vector<int>&ans)
    {
        if(root==NULL) return ;
        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
    bool findTarget(TreeNode* root, int k) {
       vector<int>ans;
       preorder(root,ans);  
     return check(ans,k);
    }
};