class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        std::unordered_map<int, int> m;
        m[0] = 1;
        int prefSum = 0;
        int result = 0;

        for(int i = 0;i < nums.size();++i)
        {
            prefSum += nums[i];
            if(m.find(prefSum - k) != m.end())
            {
                result += m[prefSum - k];
            }
            m[prefSum]++;
        }
        return result;
    }
};
