class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        std::unordered_map<int, int> m;
        int result = 0;

        for(int i = 0;i < nums.size(); ++i)
        {
            m[nums[i]]++;
        }

        for(const auto& current : m)
        {
            if(k == 0)
            {
                if(current.second > 1) result++;
            }
            else
            {
                if(m.find(k + current.first) != m.end()) result++;
            }
        }
        return result;
    }
};
