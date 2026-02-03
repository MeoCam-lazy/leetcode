# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def countNodes(self, root):
        return self.count(root)
    def count(self,node):
        if node == None:
            return 0
        return 1 + self.count(node.left) +self. count(node.right)
        