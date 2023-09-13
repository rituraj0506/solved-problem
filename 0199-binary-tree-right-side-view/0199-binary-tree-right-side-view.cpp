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
    void lvlod(TreeNode* root,int lvl)
    {
        
       if(root==NULL) return;
        if(lvl==ans.size())
        ans.push_back(root->val);
        lvlod(root->right,lvl+1);
        lvlod(root->left,lvl+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        int lvl=0;
      lvlod(root,lvl);
        return ans;
    }
};