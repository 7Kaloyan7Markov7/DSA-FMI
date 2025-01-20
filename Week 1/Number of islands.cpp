#include <iostream>
class Solution {
public:

    void crawling(vector<vector<char>>& grid, int i, int j)
    {
         if (i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size()) return;
        if (grid[i][j] != '1') return;


         grid[i][j] = '0';

        crawling(grid, i + 1, j);
        crawling(grid, i , j + 1);
        crawling(grid, i - 1, j);
        crawling(grid, i , j - 1);

    }

    int numIslands(vector<vector<char>>& grid) {
        int res = 0;

        for(int i = 0;i < grid.size();++i)
        {
            for(int j = 0;j < grid[i].size();++j)
            {
                if(grid[i][j] == '1')
                {
                    crawling(grid,i,j);
                    res++;
                }
            }
        }
        return res;
    }
};
