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
    //It is given that we must return sum of every left leaves. So i just put a sign in to a recursive function with deapth first search whenever it's left branch. 
    void dfs(TreeNode*node, int &sum, int sign){
        if(node == nullptr) return;
        if(sign && node->left == nullptr && node->right == nullptr){
            sum += node->val;
        }
        dfs(node->left,sum,1);
        dfs(node->right,sum,0);
    }
};