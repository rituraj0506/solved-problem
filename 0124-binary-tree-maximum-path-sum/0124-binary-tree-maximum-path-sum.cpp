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
    int pathsum(TreeNode*root,int &maxi)
    {
        if(root==NULL) return NULL;
    // if any left node is neg then i not take this convert into zero becoz maxpathsum
        int lh=max(0,pathsum(root->left,maxi));
  // if any right node is neg then i not take this convert into zero becoz maxpathsum
        int rh=max(0,pathsum(root->right,maxi));
        maxi=max(maxi,lh+rh+root->val);
        return root->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
        int maxi=-1e9;
      pathsum(root,maxi);
        return maxi;
    }
};