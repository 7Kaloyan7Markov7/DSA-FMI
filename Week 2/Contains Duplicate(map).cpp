class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> m;

        for(int i = 0;i < nums.size();++i)
        {
            m[nums[i]]++;
        }

        for(const auto& element : m)
        {
            if(element.second > 1) return true;
        }
        return false;
    }
};
