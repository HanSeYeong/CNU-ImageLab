class Solution(object):
    def max_calc(self,grid,i,j):
        # i-1, j 와 i,j-1 을 비교
        if i <= 0 :
            a = -1
        else :
            a = grid[i-1][j]
        if j <= 0 :
            b = -1
        else :
            b = grid[i][j-1]
        # 그냥 min을 써버리면 무조건 0을 잡아버림
        if a == -1 :
            if b == -1 :
                result = 0
            else :
                result = b
        elif b == -1 :
            result = a
        else :
            result = min(a,b)
        return result + grid[i][j]
    def minPathSum(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        m = len(grid)
        n = len(grid[0])
        
        for i in range(m):
            for j in range(n):
                grid[i][j] = self.max_calc(grid,i,j)
        return grid[m-1][n-1]
