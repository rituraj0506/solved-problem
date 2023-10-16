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
    void inorder(TreeNode*root,int &res,int k,int &c)
    {
        if(root==NULL)
            return ;
        inorder(root->left,res,k,c);
        c++;
        if(c==k) res=root->val;
        inorder(root->right,res,k,c);
    }
    int kthSmallest(TreeNode* root, int k) {
       int res=0,c=0;
        inorder(root,res,k,c);
        return res;
    }
};