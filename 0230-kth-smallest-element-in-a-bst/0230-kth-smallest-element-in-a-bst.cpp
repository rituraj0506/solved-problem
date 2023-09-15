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
    void inorder(TreeNode*root,int k,int &ans,int &c)
    {
        if(root==NULL) return;
        inorder(root->left,k,ans,c);
        c++;
        if(c==k)
           ans=root->val;
        inorder(root->right,k,ans,c);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans=0,c=0;
        inorder(root,k,ans,c);
        return ans;
    }
};