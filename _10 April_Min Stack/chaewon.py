class MinStack(object):

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.Arr = []

    def push(self, x):
        """
        :type x: int
        :rtype: None
        """
        self.Arr.append(x)

    def pop(self):
        """
        :rtype: None
        """
        self.Arr.pop()

    def top(self):
        """
        :rtype: int
        """
        return self.Arr[-1]

    def getMin(self):
        """
        :rtype: int
        """
        return min(self.Arr)

