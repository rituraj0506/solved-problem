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
    TreeNode*buildtree(vector<int>& preorder,int prest,int preend, vector<int>& inorder,int inst,int inend,map<int,int>&m)
    {
       if(prest>preend||inst>inend) return NULL;
        TreeNode*root=new TreeNode(preorder[prest]);
        int inroot=m[root->val];
        int numsleft=inroot-inst;// if three guy in inorder then also three guy in preorder
    root->left=buildtree(preorder,prest+1,prest+numsleft,inorder,inst,inroot-1,m);
    root->right=buildtree(preorder,prest+numsleft+1,preend,inorder,inroot+1,inend,m);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[inorder[i]]=i;
        }
       return buildtree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,m);
    }
};