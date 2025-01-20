#include <iosream>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::unordered_map<int, int> m;
        for(const auto& element : nums)
        {
            m[element]++;
        }

        for(const auto& element : m)
        {
            if(element.second == 1) return element.first;
        }
        return 1;
    }
};
