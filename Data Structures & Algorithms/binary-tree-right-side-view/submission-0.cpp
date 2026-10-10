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
    vector<int> rightSideView(TreeNode* root) {
      vector<int>res;
      if(!root) return res;
      queue<TreeNode*>q;
      q.push(root);
        while(!q.empty())
        {
            int cap=q.size(); //here capacity->cap is size of queue
            for(int i=0;i<cap;i++)
            {
                TreeNode* node1=q.front();
                q.pop();
                if(i==cap-1)
                {
                    res.push_back(node1->val);
                }
                if(node1->left)
                q.push(node1->left);
                if(node1->right)
                q.push(node1->right);

            }

        } 
      return res;  
    }
};
