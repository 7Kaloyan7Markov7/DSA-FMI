class Solution {
public:
    int getAllPaths(std::vector<std::vector<int>>& grid, int x, int y, int remainingSpaces)
    {
        if(x < 0 || y  < 0 || x >= grid[0].size() || y >= grid.size() || grid[y][x] == -1) return 0;
        
        if(grid[y][x] == 2)
        {
            if(!remainingSpaces) return 1;
            else return 0;
        }

        int temp = grid[y][x];
        grid[y][x] = - 1;

        int result = getAllPaths(grid, x - 1, y, remainingSpaces - 1) +
                     getAllPaths(grid, x + 1, y, remainingSpaces - 1) +
                     getAllPaths(grid, x, y - 1, remainingSpaces - 1) +
                     getAllPaths(grid, x, y + 1, remainingSpaces -1);
        grid[y][x] = temp;

        return result;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int cols = grid[0].size();
        int rows = grid.size();

        int freeSpaces = 0;
        int startX = 0;
        int startY = 0;

        for(int i = 0;i < rows;++i)
        {
            for(int j = 0;j < cols;++j)
            {
                if(!grid[i][j] || grid[i][j] == 2) freeSpaces++;
                else if(grid[i][j] == 1)
                {
                    startY = i;
                    startX = j;
                }
            }
        }

        return getAllPaths(grid, startX, startY, freeSpaces);
    }
};
