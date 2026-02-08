# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def maxDepth(self, root):
        return self.dfs(root)
    def dfs(self, node):
        if node == None:
            return 0
        return 1 + max(self.dfs(node.left), self.dfs(node.right))
        