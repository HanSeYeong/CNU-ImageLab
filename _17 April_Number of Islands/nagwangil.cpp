class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size() ==0)
            return 0;
        vector<vector<int>> visit(grid.size(), vector<int>(grid[0].size(), 0));
        int islands = 0;

        for (int i = 0; i < visit.size(); i++)
        {
            for (int j = 0; j < visit[0].size(); j++)
            {
                if (visit[i][j] == 1)
                {
                    continue;
                }
                else
                {
                    if (grid[i][j] == '1')
                    {  
                        islands++;
                        visitground(visit, grid, i, j);
                    }
                }
            }
        }
        return islands;
    }

    void visitground(vector<vector<int>>& visit, vector<vector<char>>& grid, int i, int j)
    {
        if (grid[i][j] ==' 0')
        {
            return;
        }
        else if (grid[i][j] == '1')
        {
            if (visit[i][j] == 0)
            {
                visit[i][j] = 1;
                visit[i][j] == 1;
                if (i - 1 >= 0)
                    visitground(visit, grid, i - 1, j);
                if (j - 1 >= 0)
                    visitground(visit, grid, i, j - 1);
                if (i + 1 <= visit.size()-1)
                    visitground(visit, grid, i + 1, j);
                if (j + 1 <= visit[0].size()-1)
                    visitground(visit, grid, i, j + 1);
            }
            else
                return;
        }
    }
};