class MinStack(object):
    
    def __init__(self):
        self.array = []
        self.mi = 0
    
    
    def push(self, x):
        if len(self.array) == 0 :
            self.mi = x
            
        self.array.append(x)
        
        if self.mi > x :
            self.mi = x
        

    def pop(self):
        tag = len(self.array)-1
        isdel = False
        if(self.array[tag] == self.mi) :
            isdel = True
        del(self.array[tag])
        if isdel:
            if len(self.array) > 0 :
                self.mi = self.array[0]
                for i in self.array :
                    if self.mi > i :
                        self.mi = i
            else :
                self.mi = 0
                    
    def top(self):
        return self.array[len(self.array)-1]
        

    def getMin(self):
        return self.mi
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
