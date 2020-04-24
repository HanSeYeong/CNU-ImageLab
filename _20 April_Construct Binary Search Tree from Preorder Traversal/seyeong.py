class Solution:
    def bstFromPreorder(self, preorder: List[int]) -> TreeNode:
        root = None
        for e in preorder:
            root = self.bst(root, e)
        return root

    
    def bst(self, node, val):
        if node is None:
            return TreeNode(val) 
        if val < node.val:
            node.left = self.bst(node.left, val)
        else:
            node.right = self.bst(node.right, val)
        return node
