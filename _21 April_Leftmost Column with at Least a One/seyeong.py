class Solution:
    def binarySearch(self, binaryMatrix, row):
        left = 0
        right = self.last_col
        while (left < right):
            mid = (left + right) // 2

            if binaryMatrix.get(row, mid) == 1:
                right = mid
            else:
                left = mid + 1
            self.last_col = left

    
    def leftMostColumnWithOne(self, binaryMatrix: 'BinaryMatrix') -> int:
        self.rows, self.cols = binaryMatrix.dimensions()
        self.last_col = self.cols
        
        for row in range(self.rows):
            self.binarySearch(binaryMatrix, row)
        
        if self.last_col == self.cols:
            return -1
        else:
            return self.last_col
