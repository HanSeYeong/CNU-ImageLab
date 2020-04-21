# """
# This is BinaryMatrix's API interface.
# You should not implement it, or speculate about its implementation
# """
#class BinaryMatrix(object):
#    def get(self, x, y):
#        """
#        :type x : int, y : int
#        :rtype int
#        """
#
#    def dimensions:
#        """
#        :rtype list[]
#        """

class Solution(object):
    def leftMostColumnWithOne(self, binaryMatrix):
        """
        :type binaryMatrix: BinaryMatrix
        :rtype: int
        """
        n,m = binaryMatrix.dimensions()
        m_index = m
        for i in range(n) :
            start = 0
            end = m-1
            while start <= end :
                mid = (start + end) // 2
                t = binaryMatrix.get(i,mid)
                if t == 1 :
                    end = mid - 1
                else :
                    start = mid + 1
                
            #print(start,mid,end)
            if m_index > start :
                m_index = start
        if m_index >= m :
            m_index = -1
        return (m_index)
        
