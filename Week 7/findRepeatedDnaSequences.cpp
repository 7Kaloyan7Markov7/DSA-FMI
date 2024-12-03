class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        std::vector<std::string> res;
        std::unordered_map<std::string, int> m;
        if(s.size() < 10) return res;

        for(int i = 0;i <= s.size() - 10;++i)
        {
            std::string current = s.substr(i, 10);
            m[current]++;
        }

        for(const auto& current : m)
        {
            if(current.second > 1) res.push_back(current.first);
        }

        return res;
    }
};
