class Solution(object):
    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        if grid == []:
            return 0
        h = len(grid)
        w = len(grid[-1])
        chk = [[1 for i in range(w)] for j in range(h)]
        count = 0
        def dfs(y,x):
            chk[y][x] = 0
            d_x = [1,-1,0,0]
            d_y = [0,0,1,-1]
            for i in range(4):
                bx = x+d_x[i]
                by = y+d_y[i]

                if -1<bx and -1<by and bx<w and by<h and grid[by][bx] == '1'and chk[by][bx]:
                    dfs(by,bx)
                
            return 1
            
        for i in range(h):
            for j in range(w):
                if chk[i][j] and grid[i][j] =='1':

                    if dfs(i,j):
                        count +=1

        return count
