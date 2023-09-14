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
    int widthOfBinaryTree(TreeNode* root) {
        long long maxi=0;
        if(root==NULL) return NULL;
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        while(!q.empty())
        {
            long long s=q.size();
            long long minm=q.front().second;
            long long fi=0,li=0;
            for(int i=0;i<s;i++)
            {
            long long ind=q.front().second-minm;
            TreeNode*node=q.front().first;
                q.pop();
            if(i==0) fi=ind;
            if(i==s-1) li=ind;
            if(node->left!=NULL) q.push({node->left,2*ind+1});
            if(node->right!=NULL) q.push({node->right,2*ind+2});
            }
            maxi=max(maxi,li-fi+1);
        }
        return maxi;
    }
};