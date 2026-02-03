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
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        dfs(root,sum, 0);
        return sum;
    }
    void dfs(TreeNode*node, int &sum, int ans){
        if(!node) return;
        ans = ans*10 + node->val;
        if(!node->left && !node->right){
            sum += ans;
        }
        dfs(node->left,sum,ans);
        dfs(node->right,sum,ans);
    }
};