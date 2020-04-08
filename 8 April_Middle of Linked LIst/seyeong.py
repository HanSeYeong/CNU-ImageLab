# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:

    def middleNode(self, head):
        head_node = head
        count = 0
        while True:
            count += 1
            if head_node.next == None:
                break
            head_node = head_node.next

        for _ in range(int(count // 2)):
            head = head.next
        return head