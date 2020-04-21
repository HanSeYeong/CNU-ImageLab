class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        for i in range(1, len(grid[0])):
            grid[0][i] += grid[0][i - 1]
        
        
        for i in range(1, len(grid)):
            for j in range(len(grid[0])):
                if j != 0:
                    grid[i][j] += min(grid[i - 1][j], grid[i][j - 1])
                else:
                    grid[i][j] += grid[i - 1][j]
        print(grid)
        return grid[-1][-1]
        
            
