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
     unordered_map<int,int>indexes;
        int pre=0;

     TreeNode* build(vector<int>& preorder,int l,int r)
     {
        if(l>r)
        {
            return nullptr;
        }
        int root_val=preorder[pre];
        pre++;

        TreeNode*root=new TreeNode(root_val);
        int mid=indexes[root_val];
        root->left=build(preorder,l,mid-1);
        root->right=build(preorder,mid+1,r);
        return root;
     }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        for(int i=0;i<n;i++)
        {
            indexes[inorder[i]]=i;

        }
        return build(preorder,0,n-1);
    }
};
