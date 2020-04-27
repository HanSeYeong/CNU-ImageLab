class Solution(object):
    def leftMostColumnWithOne(self, binaryMatrix):
        """
        :type binaryMatrix: BinaryMatrix
        :rtype: int
        """
        row,col = binaryMatrix.dimensions()
        ans =col-1
        for i in range(row):
            while True:
                if binaryMatrix.get(i,ans):
                    if ans == 0:
                        return 0
                    ans -= 1
                else:
                    break
        if ans == col-1:
            return -1
        return ans + 1
