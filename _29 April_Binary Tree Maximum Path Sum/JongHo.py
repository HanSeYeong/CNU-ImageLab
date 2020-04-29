# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def maxNode(self,node):
        if not node:
            return 0
        left = self.maxNode(node.left)
        right = self.maxNode(node.right)
        self.max = max(self.max, left+node.val+right)
        
        return max(node.val + max(left,right),0)
    def maxPathSum(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.max = None
        self.maxNode(root)
        return self.max
