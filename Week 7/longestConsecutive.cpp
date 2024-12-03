class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;

        std::unordered_map<int, int> m;
        int counter = 1;
        int result = 1;


        for(int i =0;i < nums.size();++i)
        {
            m[nums[i]]++;
        }

        for(int i = 0;i < nums.size();++i)
        {
            if(m.find(nums[i] - 1) == m.end())
            {
                counter = 1;
                int nextNum = nums[i] + 1;
                while(m.find(nextNum) != m.end())
                {
                    counter++;
                    nextNum++;
                }

                result = std::max(result, counter);
            }
        }

        return result;
    }
};;
