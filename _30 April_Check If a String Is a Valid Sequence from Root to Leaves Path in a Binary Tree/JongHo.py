# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    #1. list와 일치하는 부분이 있는지 파악한다.
    #2. 있을 경우 해당 node의 좌우를 다음 인덱스를 탐색을 시작한다.
    def ValidSequence(self,node,arr) :
        if arr == [] :
            if node != None :
                return False
            return True
        if node == None :
            return False
        if node.val == arr[0] :
            left = self.ValidSequence(node.left,arr[1:])
            right = self.ValidSequence(node.right,arr[1:])
            if len(arr[1:]) == 0 :
                return left and right
            return left or right
        else :
            return False
    
    def isValidSequence(self, root, arr):
        """
        :type root: TreeNode
        :type arr: List[int]
        :rtype: bool
        """
        if root == None or arr == [] :
            return False
        return self.ValidSequence(root,arr)
        
        
