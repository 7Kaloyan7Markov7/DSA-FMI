class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        std::unordered_map<int, int> m;
        std::vector<int> res;
        for(int i = 0;i < nums.size();++i)
        {
            m[nums[i]]++;
        }
        
        for(const auto& pair : m)
        {
            if(pair.second == 1) res.push_back(pair.first);
        }

        return res;
    }
};
