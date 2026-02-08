# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isBalanced(self, root):
        return self.dfsHeight(root) != -1
    def dfsHeight(self,node):
        if node == None:
            return 0
        left = self.dfsHeight(node.left)
        if(left == -1):
            return -1
        right = self.dfsHeight(node.right)
        if(right == -1):
            return -1
        if abs(left-right) > 1:
            return -1
        return 1 + max(left,right)

        