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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int sum;
        while(!q.empty())
        {
            int s=q.size();
             sum=0;
            for(int i=0;i<s;i++)
            {
                TreeNode*node=q.front();
                q.pop();
                sum+=node->val;
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
            }
        }
        return sum;
    }
};