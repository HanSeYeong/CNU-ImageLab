class FirstUnique(object):

    def __init__(self, nums):
        """
        :type nums: List[int]
        """
        self.deque = collections.deque()
        self.lookup = {}
        for num in nums :
            self.add(num)
            
            
    def showFirstUnique(self):
        """
        :rtype: int
        """
        if len(self.deque) == 0:
            return -1
        
        while len(self.deque) > 0 and self.deque[0] in self.lookup and self.lookup[self.deque[0]] >=2 :
            self.deque.popleft()
        
        if len(self.deque) == 0 :
            return -1
        return self.deque[0]

    def add(self, value):
        """
        :type value: int
        :rtype: None
        """
        if value in self.lookup :
            self.lookup[value] += 1
        else :
            self.lookup[value] = 1
        
        self.deque.append(value)


# Your FirstUnique object will be instantiated and called as such:
# obj = FirstUnique(nums)
# param_1 = obj.showFirstUnique()
# obj.add(value)

#https://www.youtube.com/watch?v=1CELXSnckCw
