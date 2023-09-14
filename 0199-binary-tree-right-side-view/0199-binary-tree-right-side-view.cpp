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
    vector<int>ans;
    void f(TreeNode*root,int lvl)
    {
        if(root==NULL) return ;
        if(lvl==ans.size())
        ans.push_back(root->val);
        f(root->right,lvl+1);
        f(root->left,lvl+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        int lvl=0;
        f(root,lvl);
        return ans;
    }
};