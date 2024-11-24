class Solution {
public:
    int uniquePaths(int m, int n) {
        if(n == 1 && m == 1) return 1;
        std::vector<std::vector<int>> matrix(m, std::vector<int>(n, 0));
        int rows = m;
        int cols = n;

        for (int i = 1; i < rows; ++i)
        {
            matrix[i][0] = 1;
        }

        for (int i = 1; i < cols; ++i)
        {
            matrix[0][i] = 1;
        }

        for (int i = 1; i < rows; ++i)
        {
            for (int j = 1; j < cols; ++j)
            {
                matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1];
            }
        }


        return matrix[rows - 1][cols - 1];
    }
};
