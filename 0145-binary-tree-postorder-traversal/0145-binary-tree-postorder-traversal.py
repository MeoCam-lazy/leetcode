# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def postorderTraversal(self, root):
        result = []
        self.dfs(root,result)
        return result
    def dfs(self,node,result):
        if node == None:
            return
        self.dfs(node.left,result)
        self.dfs(node.right,result)
        result.append(node.val)
        