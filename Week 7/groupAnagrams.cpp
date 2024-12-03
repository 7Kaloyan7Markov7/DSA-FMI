class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        std::unordered_map<std::string, std::vector<std::string>> m;

        for(const auto& current : strs)
        {
            std::string sorted = current;
            std::sort(sorted.begin(), sorted.end());
            m[sorted].push_back(current);
        }

        for(const auto& current : m)
        {
            res.push_back(current.second);
        }
        return res;
    }
};
