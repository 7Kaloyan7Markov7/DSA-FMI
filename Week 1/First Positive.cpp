class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         long long max = *std::max_element(nums.begin(), nums.end());
        if(max <= 0) return 1;
        std::vector<bool> hist(max + 1, false);

        for(int i = 0;i < nums.size();++i)
        {
            if(nums[i] > 0)
            hist[nums[i]] = true;
        }

        for(long long i = 1;i < max;++i)
        {
            if(!hist[i]) return i;
        }
       

         return max + 1;
    }
};
