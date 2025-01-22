class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::unordered_map<int, int> m;
        for(int i = 0;i < nums.size();++i)
        {
            m[nums[i]]++;
        }
        for(const auto& pair : m)
        {
            if(pair.second == 1) return pair.first;
        }
        return 1;
    }
};
