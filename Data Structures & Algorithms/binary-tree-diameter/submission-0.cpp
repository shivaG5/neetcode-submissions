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
    int best=0;
    
    int height(TreeNode*root)
    {
        if(!root) return 0;
     
        int lh=height(root->left);
        int rh=height(root->right);
        best=max(lh+rh,best);
        return 1+max(lh,rh);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
       best=0;
       height(root);
       return best; 
    }
};
