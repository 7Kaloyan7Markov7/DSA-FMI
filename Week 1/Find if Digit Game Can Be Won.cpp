class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleDigit = 0;
        int doubleDigit = 0;

        for(int i = 0; i < nums.size();++i)
        {
            if(nums[i] > 9) doubleDigit += nums[i];
            else singleDigit += nums[i];
        }
        return singleDigit != doubleDigit;
        
    }
};
