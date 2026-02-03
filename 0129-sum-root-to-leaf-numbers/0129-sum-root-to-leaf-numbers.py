# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def sumNumbers(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: int
        """
        return self.dfs(root,0)
    def dfs(self,node,ans):
        if node == None:
            return 0
        ans = ans*10 + node.val
        if node.left == None and node.right == None:
            return ans
        return self.dfs(node.left,ans) + self.dfs(node.right,ans)
        