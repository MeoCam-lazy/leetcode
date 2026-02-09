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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        dfs(root,sum,0);
        return sum;
    }
    void dfs(TreeNode*node, int &sum, int sign){
        if(node == nullptr) return;
        if(sign && node->left == nullptr && node->right == nullptr){
            sum += node->val;
        }
        dfs(node->left,sum,1);
        dfs(node->right,sum,0);
    }
};