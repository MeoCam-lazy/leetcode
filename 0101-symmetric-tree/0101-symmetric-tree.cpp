class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        vector<int> leftSide, rightSide;
        dfs_left(root->left, leftSide);
        dfs_right(root->right, rightSide);   
        return leftSide == rightSide; 
    }

    void dfs_left(TreeNode *node, vector<int> &vec){
        if (node == nullptr) {
            vec.push_back(-1001); 
            return;
        }
        vec.push_back(node->val);
        dfs_left(node->left, vec);
        dfs_left(node->right, vec);
    }

    void dfs_right(TreeNode *node, vector<int> &vec){
        if (node == nullptr) {
            vec.push_back(-1001); 
            return;
        }
        vec.push_back(node->val);
        dfs_right(node->right, vec);
        dfs_right(node->left, vec); 
    }
};