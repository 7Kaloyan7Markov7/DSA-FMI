class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums)  
    { 
    std::vector<std::vector<int>> res;
    bool hasElements = true;

    std::vector<int> hist (201,0);

    for(int i = 0;i < nums.size();++i)
    {
        hist[nums[i]]++;
    }

    while(hasElements)
    {
        std::vector<int> arr;
        hasElements = false;
        for(int i = 1;i < 201;++i)
        {
            if(hist[i] > 0)
            {
                arr.push_back(i);
                hist[i]--;
                hasElements = true;
            }
        }
        if(hasElements)
        res.push_back(arr);
    }
    return res;
    }
};
