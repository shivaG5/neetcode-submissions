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
    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
    }
 private:
    int dfs(TreeNode*node1,int max_numb)
    {
        if(!node1) return 0;
        int good_node=(node1->val>=max_numb) ? 1 : 0;
        max_numb=max(node1->val,max_numb);
        return good_node+dfs(node1->left,max_numb)+dfs(node1->right,max_numb);

    }
};
