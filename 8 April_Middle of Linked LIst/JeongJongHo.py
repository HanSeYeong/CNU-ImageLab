# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def middleNode(self, head):
        c = 1
        output = head
        while(head.next != None) :
            head = head.next
            c = c + 1
        start = int(c/2)
        c = 1
        while(c <= start) :
            output = output.next
            c = c+1
        return output
