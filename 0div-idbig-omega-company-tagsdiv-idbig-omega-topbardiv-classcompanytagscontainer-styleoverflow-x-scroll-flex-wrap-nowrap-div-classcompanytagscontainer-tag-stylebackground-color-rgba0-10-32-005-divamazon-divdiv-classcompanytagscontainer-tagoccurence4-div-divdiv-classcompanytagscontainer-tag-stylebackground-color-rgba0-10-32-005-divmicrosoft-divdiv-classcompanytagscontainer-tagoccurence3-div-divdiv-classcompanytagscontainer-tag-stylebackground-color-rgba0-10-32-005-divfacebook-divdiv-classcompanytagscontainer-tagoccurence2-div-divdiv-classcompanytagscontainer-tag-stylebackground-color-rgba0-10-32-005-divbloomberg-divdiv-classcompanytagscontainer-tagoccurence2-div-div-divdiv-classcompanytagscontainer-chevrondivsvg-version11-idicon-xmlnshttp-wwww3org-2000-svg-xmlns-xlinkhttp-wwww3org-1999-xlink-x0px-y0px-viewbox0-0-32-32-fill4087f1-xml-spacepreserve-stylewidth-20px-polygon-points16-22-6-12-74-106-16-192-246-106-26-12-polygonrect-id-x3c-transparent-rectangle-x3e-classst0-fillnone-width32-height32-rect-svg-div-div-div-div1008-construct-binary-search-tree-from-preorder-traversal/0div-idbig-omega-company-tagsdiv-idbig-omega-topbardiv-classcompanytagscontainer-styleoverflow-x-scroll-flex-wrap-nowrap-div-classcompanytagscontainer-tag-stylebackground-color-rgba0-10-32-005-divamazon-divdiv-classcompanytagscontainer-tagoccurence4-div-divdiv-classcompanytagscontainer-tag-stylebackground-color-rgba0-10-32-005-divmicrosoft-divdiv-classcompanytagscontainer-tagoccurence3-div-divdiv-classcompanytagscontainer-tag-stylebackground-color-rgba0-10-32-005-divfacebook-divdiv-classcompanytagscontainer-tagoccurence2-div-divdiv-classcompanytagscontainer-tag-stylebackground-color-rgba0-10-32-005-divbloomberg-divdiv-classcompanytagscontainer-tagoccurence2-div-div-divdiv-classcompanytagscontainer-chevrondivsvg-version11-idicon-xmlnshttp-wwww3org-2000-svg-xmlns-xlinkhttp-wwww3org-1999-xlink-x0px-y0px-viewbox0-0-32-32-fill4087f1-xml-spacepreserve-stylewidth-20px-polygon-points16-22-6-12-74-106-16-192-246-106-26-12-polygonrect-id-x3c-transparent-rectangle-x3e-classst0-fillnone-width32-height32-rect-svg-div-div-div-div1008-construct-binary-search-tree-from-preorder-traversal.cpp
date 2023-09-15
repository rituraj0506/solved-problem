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
    TreeNode*fun(int &i,vector<int>&a,int maxi)
    {
        int n=a.size();
        if(i==n||a[i]>maxi) return NULL;
         TreeNode*root=new TreeNode(a[i++]);
        root->left=fun(i,a,root->val);
        root->right=fun(i,a,maxi);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
       return  fun(i,preorder,INT_MAX);// assume intmax is right side val
    }
};