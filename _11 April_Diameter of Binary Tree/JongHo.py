# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

    
class Solution(object):
    
    def depth_search(self,root):
        if root == None :
            return 0
        a = self.depth_search(root.left)
        b = self.depth_search(root.right)
        print(a,b)
        self.mx = max(self.mx,(a+b)+1)
        return max(a,b)+1
    
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.mx = 1
        self.depth_search(root)
        
        return self.mx-1
