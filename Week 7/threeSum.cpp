class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::unordered_map<int, int> m;
        int target = 0;
        std::vector<std::vector<int>> result;
        std::sort(nums.begin(), nums.end());

        for(int i = 0;i < nums.size();++i)
        {
            m[nums[i]] = i;
        }

        for(int i = 0;i < nums.size();++i)
        {
            target = -nums[i];

            for(int j = i + 1;j < nums.size();++j)
            {
                if(m.find(target - nums[j]) != m.end() && (m[target - nums[j]] > j))
                {
                    result.push_back({nums[i], nums[j], target - nums[j]});
                }
                j = m[nums[j]];
            }
            i = m[nums[i]];
        }
        return result;
    }
};
