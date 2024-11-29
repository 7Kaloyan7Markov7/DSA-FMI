class Solution
{
public:
    bool canJump(std::vector<int>& nums)
    {
        int size = nums.size();
        std::vector<bool> path(size, false);

        path[0] = true;
        for(int i = 0;i < size;++i)
        {
            if(path[i])
            {
                int maxJump = std::min(size - 1, i + nums[i]);
                for(int j = i + 1;j <= maxJump;++j)
                {
                    path[j] = true;
                }
            }
        }
        return path[size - 1];
    }
};
