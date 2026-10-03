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
    bool isBalanced(TreeNode* root) {
      return bfs(root)!=-1;
    }
    private:
    int bfs(TreeNode*node)
    {
        if(!node) return 0;
        int l=bfs(node->left);
        int r=bfs(node->right);
        if(l==-1 or r==-1){
            return -1;
        }
        if(abs(r-l)>1){
            return -1;
        }
        return 1+max(l,r);
    }
};
