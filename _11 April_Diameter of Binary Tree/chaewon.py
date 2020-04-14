class Solution(object):

    def long_distance(self, root):
        if root == None:
            return 0
        a = self.long_distance(root.left)
        b = self.long_distance(root.right)
        self.mx = max(a + b, self.mx)
        return max(a, b) + 1

    def diameterOfBinaryTree(self, root):
        self.mx = 0
        self.long_distance(root)
        return self.mx