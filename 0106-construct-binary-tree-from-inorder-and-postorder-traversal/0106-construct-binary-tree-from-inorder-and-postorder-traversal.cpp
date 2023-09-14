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
    // TreeNode* buildTree(vector<int>&inorder,int inst,int inend,vector<int>& postorder,int postst,int postend,map<int,int>&m)
    // {
    //     if(inst>inend || postst>postend) return NULL;
    //     TreeNode*node=new TreeNode[postorder[postend]];
    //     int inroot=m[node->val];
    //     int numsleft=inroot-inst;
    //     node->left=buildTree(inorder,inst,inroot-1,postorder,postst,postst+numsleft-1,m);
    //     node->right=buildTree(inorder,inroot+1,inend,postorder,postst+numsleft,postend-1,m);
    //     return node;
    // }
TreeNode *buildTree(vector<int>& inorder,int inst,int inend,vector<int>& postorder,int postst,int postend,map<int,int>&m)
    {
        if(inst >inend || postst>postend) return NULL;
        TreeNode*root=new TreeNode(postorder[postend]);
        int inroot=m[root->val];
        int numsleft=inroot-inst;
 root->left=buildTree(inorder,inst,inroot-1,postorder,postst,postst+numsleft-1,m);
root->right=buildTree(inorder,inroot+1,inend,postorder,postst+numsleft,postend-1,m);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
         map<int,int>m;
        for(int i=0;i<inorder.size();i++)
        {
          m[inorder[i]]=i;  
        }
    return buildTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,m);
    }
};