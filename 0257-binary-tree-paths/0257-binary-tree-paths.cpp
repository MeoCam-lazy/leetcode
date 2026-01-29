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
    void findPath(TreeNode *node, string str, vector<string> &ans){
        if(!node) return;
        if(!node -> left && !node -> right){
            str += to_string(node->val);
            ans.push_back(str);
            return;
            //this case means we have fishesd a branch, so we add it to the answer
        }
        else{
            str += to_string(node->val) + "->";
            findPath(node->left, str, ans);
            findPath(node->right,str, ans);
            //we will traverse left branch over right branch. Note that ans is a reference 
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        findPath(root, "", ans);
        return ans;
    }
};