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
    bool track(TreeNode*node, int result, int targetSum){
        if(node == nullptr){
            return false;
        }
        else if(!node->left && !node->right){
            return result+node->val == targetSum;
        }
        else
        return track(node->left,result+node->val,targetSum) || track(node->right,result+node->val,targetSum);

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;
        int result = 0;
        return track(root,result,targetSum);
    }
};