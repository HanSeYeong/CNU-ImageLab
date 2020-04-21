class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rowSize = grid.size();
        int columnSize = grid[0].size();
        for(int j =0;j<rowSize;j++){
            if(j>0)
                grid[j][0]=grid[j-1][0]+grid[j][0];
            for(int i =1;i<columnSize;i++){
                if(j==0){
                grid[j][i]=grid[j][i-1]+grid[j][i];
                }
                else
                {
                    grid[j][i]=grid[j][i]+min(grid[j-1][i],grid[j][i-1]);
                }
            }
        }
        return grid[rowSize-1][columnSize-1];
    }    
};