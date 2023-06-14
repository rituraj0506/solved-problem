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
    void dfs(TreeNode*root)
    {
        if(root==NULL) return;
        dfs(root->left);
         ans.push_back(root->val);
        dfs(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        int mini=1e9;
        for(int i=1;i<ans.size();i++)
        {
            mini=min(mini,abs(ans[i]-ans[i-1]));
        }
        return mini;
    }
};