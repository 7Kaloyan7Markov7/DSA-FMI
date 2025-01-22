class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size();++i)
        {
            for(int j = i + 1;j < matrix[i].size();++j)
            {
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(auto& array : matrix)
        {
            std::reverse(array.begin(), array.end());
        }
    }
};
