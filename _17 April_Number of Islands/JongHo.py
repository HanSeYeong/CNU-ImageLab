class Solution(object):
    def numIslands(self, grid):
        cnt_land = 0
        q = []
        d = [[-1,0,1,0],[0,-1,0,1]]
        len_y = len(grid)
        if len_y ==0 :
            return 0
        len_x = len(grid[0])
        if len_x == 0:
            return 0
        for i in range(len_y):
            for j in range(len_x):
                if grid[i][j] == "1":
                    grid[i][j] = "-1"
                    q.append((i,j))
                    while q :
                        cur = q.pop(0)
                        for k in range(4):
                            next_y = cur[0]+d[0][k]
                            next_x = cur[1]+d[1][k]
                            if next_y >= 0 and next_y <len_y and next_x >=0 and next_x <len_x and grid[next_y][next_x] == "1":
                                grid[next_y][next_x] ="-1"
                                q.append((next_y, next_x))
                    cnt_land +=1
        return cnt_land
                        
