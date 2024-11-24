class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0]) return 0;

        int rows = obstacleGrid.size();
        int cols = obstacleGrid[0].size();
        std::vector<std::vector<int>> grid(rows, std::vector<int>(cols, 0));

        grid[0][0] = 1;
        for(int i = 1;i < rows;++i)
        {
            if(!obstacleGrid[i][0]) grid[i][0] = 1;
            else break;
        }

        for(int i = 1; i < cols; ++i)
        {
            if(!obstacleGrid[0][i]) grid[0][i] = 1;
            else break;
        }

        for(int i = 1; i < rows;++i)
        {
            for(int j = 1;j < cols;++j)
            {
                if(!obstacleGrid[i][j]) grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
                else grid[i][j] = 0;
            }
        }

        return grid[rows - 1][cols - 1];
    }
};
