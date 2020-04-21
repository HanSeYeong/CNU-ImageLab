class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if len(grid) < 1:
            return 0
        
        def dfs(r, c):            
            if r<0 or c<0 or r>rows-1 or c>cols-1 or grid[r][c]=='0': # Check whether we have reached beyond the edge of the grid or the current cell is '0'. If so, terminate the recursion stack.
                return       
            grid[r][c] = '0'     # Flips all the connected islands to '0's
            
			# DFS in all four directions
            dfs(r-1, c)
            dfs(r+1, c)
            dfs(r, c-1)
            dfs(r, c+1)
                    
        rows = len(grid)
        cols = len(grid[0])
        num_islands = 0
        
        for r in range(rows):
            for c in range(cols):
                cell = grid[r][c]
                
                if cell == '0':
                    continue
                
                if cell == '1':
                    num_islands += 1
                    dfs(r, c)
                                  
        return num_islands
            
