class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        std::unordered_map<int, int> m;
        int prefSum = 0;
        int res = 0;
        m[prefSum] = -1;

        for(int i = 0;i < nums.size(); ++i)
        {
            if(!nums[i]) nums[i] = -1;
        }

        for(int i = 0;i < nums.size(); ++i)
        {
            prefSum += nums[i];
            if(m.find(prefSum) != m.end())
            {
                res = std::max(res, i - m[prefSum]);
            }
            else m[prefSum] = i;
        }
        
        return res;
    }
};
