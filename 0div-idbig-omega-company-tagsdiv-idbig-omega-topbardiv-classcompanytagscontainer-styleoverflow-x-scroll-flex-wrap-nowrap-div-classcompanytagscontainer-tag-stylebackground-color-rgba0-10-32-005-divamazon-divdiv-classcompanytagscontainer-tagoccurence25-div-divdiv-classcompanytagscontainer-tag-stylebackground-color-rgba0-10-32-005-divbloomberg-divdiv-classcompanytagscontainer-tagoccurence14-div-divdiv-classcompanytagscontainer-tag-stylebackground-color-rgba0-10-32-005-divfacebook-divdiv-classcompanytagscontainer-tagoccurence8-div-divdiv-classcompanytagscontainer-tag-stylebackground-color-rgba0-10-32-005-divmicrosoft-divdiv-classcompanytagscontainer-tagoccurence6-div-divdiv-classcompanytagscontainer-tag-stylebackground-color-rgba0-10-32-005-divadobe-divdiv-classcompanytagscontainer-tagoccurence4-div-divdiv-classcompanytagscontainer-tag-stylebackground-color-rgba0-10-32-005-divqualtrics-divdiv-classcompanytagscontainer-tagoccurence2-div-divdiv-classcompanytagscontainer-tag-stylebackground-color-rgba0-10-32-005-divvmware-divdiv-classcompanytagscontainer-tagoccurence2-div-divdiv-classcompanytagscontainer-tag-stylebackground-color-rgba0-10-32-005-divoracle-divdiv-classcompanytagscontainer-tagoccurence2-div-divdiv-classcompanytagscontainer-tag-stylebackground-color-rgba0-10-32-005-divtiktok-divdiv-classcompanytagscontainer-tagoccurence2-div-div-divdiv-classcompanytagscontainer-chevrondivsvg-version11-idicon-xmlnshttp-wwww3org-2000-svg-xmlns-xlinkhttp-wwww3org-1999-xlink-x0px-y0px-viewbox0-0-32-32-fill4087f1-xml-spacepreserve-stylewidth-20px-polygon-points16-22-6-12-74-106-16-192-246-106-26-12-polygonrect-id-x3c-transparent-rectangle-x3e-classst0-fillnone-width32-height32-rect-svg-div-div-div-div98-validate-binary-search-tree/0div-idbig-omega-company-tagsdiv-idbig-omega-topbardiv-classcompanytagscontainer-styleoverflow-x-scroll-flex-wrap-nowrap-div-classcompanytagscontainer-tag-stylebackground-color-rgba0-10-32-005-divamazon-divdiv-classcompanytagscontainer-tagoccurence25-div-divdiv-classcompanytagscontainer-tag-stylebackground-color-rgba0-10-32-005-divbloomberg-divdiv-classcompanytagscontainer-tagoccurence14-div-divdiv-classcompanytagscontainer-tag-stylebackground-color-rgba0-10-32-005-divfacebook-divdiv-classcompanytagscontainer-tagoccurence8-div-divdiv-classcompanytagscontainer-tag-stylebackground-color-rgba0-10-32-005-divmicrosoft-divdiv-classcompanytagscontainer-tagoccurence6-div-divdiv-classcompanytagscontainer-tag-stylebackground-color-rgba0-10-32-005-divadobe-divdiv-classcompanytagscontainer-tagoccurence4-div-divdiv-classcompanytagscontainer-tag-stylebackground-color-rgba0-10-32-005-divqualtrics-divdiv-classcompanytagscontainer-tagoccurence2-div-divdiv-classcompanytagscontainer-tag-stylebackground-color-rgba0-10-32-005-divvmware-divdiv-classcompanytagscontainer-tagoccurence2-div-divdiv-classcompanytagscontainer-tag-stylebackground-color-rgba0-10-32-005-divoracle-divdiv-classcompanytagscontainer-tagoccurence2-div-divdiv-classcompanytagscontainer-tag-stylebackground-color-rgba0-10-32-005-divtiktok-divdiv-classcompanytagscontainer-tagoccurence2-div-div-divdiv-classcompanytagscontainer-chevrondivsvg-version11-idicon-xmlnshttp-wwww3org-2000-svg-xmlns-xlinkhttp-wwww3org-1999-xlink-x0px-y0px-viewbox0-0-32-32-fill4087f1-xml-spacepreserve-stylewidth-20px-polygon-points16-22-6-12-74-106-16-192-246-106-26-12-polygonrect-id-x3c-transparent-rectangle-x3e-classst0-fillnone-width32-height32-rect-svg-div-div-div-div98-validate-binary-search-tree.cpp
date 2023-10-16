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
    bool check(TreeNode*root,long mini,long maxi)
    {
        if(root==NULL) return true;// doesnt have left and right so return true
        if(root->val<=mini||root->val>=maxi) return false;
        return check(root->left,mini,root->val) && check(root->right,root->val,maxi);
            
    }
    bool isValidBST(TreeNode* root) {
       // check(INT_MIN,root,INT_MAX);
        return check(root,LONG_MIN,LONG_MAX);
    }
};