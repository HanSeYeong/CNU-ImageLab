class Solution(object):
    def middleNode(self, head):
        buffer = head
        count = 0
        while buffer:
            buffer = buffer.next
            count += 1
        count /= 2

        for i in range(count):
            head = head.next
        return head