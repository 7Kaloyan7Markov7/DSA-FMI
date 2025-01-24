class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto lower = lower_bound(nums.begin(), nums.end(), target);
        auto upper = upper_bound(nums.begin(), nums.end(), target);

        if(lower != nums.end() && *lower == target)
        {
            int a = lower - nums.begin();
            int b = upper - nums.begin() - 1;
            return {a,b};
        }
        return {-1, -1};
    }
};
