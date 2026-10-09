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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root) return res;
        queue<TreeNode*>qq;
        qq.push(root);
        while(!qq.empty())
        {
            int size=qq.size();
            vector<int>lev;
            for(int i=0;i<size;i++)
            {
             TreeNode* n1=qq.front();
             qq.pop();
             lev.push_back(n1->val);
             if(n1->left) qq.push(n1->left);
             if(n1->right) qq.push(n1->right);
            }
            res.push_back(lev);
            
        }
        return res;

    }
};
