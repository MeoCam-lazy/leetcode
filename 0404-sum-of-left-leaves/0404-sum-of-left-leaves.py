# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def sumOfLeftLeaves(self, root):
        sum = [0]
        self.dfs(root,sum,0)
        return sum[0]
    def dfs(self,node,sum,sign):
        if node == None:
            return
        if sign != 0 and node.left == None and node.right == None:
            sum[0] += node.val
        self.dfs(node.left,sum,1)
        self.dfs(node.right,sum,0)

        