# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def bstFromPreorder(self, preorder):
        """
        :type preorder: List[int]
        :rtype: TreeNode
        """
        self.root = None
        for i in preorder :
            self.insert(i)
        return self.root
        
    def insert(self, val):
        self.root = self.insert_value(self.root, val)
        if self.root == None :
            return None
        else :
            return self.root 

    def insert_value(self, node, val):
        if node is None:
            node = TreeNode(val)
        else:
            if val <= node.val:
                node.left = self.insert_value(node.left, val)
            else:
                node.right = self.insert_value(node.right, val)
        return node
