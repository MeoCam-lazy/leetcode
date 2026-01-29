# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def findPath(self,node,path,ans):
        if not node:
            return
        if not node.left and not node.right:
            path = path + str(node.val)
            ans.append(path)
            return
        else:
            path = path + str(node.val) + '->'
            self.findPath(node.left,path,ans)
            self.findPath(node.right,path,ans)
    def binaryTreePaths(self, root):
        ans = []
        self.findPath(root, '',ans)
        return ans
    
        