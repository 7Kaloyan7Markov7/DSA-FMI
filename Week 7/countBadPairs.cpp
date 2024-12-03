class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        std::unordered_map<long long, long long> m;

        long long total = (nums.size() * nums.size() - nums.size()) / 2;

        for(long long i = 0;i < nums.size(); ++i)
        {
            m[nums[i] - i]++;
        }

        for(const auto& current : m)
        {
            total -= ((current.second * current.second) - current.second) / 2;
        }

        return total;
    }
};
