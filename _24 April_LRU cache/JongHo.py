class LRUCache(object):

    def __init__(self, capacity):
        """
        :type capacity: int
        """
        self.data = collections.OrderedDict()
        self.cur = 0
        self.limit = capacity
        
        

    def get(self, key):
        """
        :type key: int
        :rtype: int
        """
        r = self.data.get(key)
        if r == None :
            return -1
        else :
            del self.data[key]
            self.data[key] = r
            return r
    
        

    def put(self, key, value):
        """
        :type key: int
        :type value: int
        :rtype: None
        """
        #(key,value)
        if self.data.get(key) :
            del self.data[key]
            self.data[key] = value
            
        else :
            if self.cur == self.limit :
                del self.data[self.data.keys()[0]]
                self.data[key] = value
            else :
                self.data[key] = value
                self.cur += 1
            


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)
