class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       std::unordered_map<int, int> m;

       for(int i = 0;i < nums.size(); ++i)
       {
        if(m.find(nums[i]) != m.end() && std::abs(m[nums[i]] - i) <= k) return true;
        m[nums[i]] = i;
       } 
        return false;
    }
};
