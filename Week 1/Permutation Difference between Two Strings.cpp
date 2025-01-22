class Solution {
public:
    int findPermutationDifference(string s, string t) {
    int sum = 0;
    std::vector<std::pair<int,int>> hist(26);

    for(int i = 0; i < s.size();++i)
    {
        hist[s[i] - 'a'].first = i;
    }

    for(int i = 0; i < t.size();++i)
    {
        hist[t[i] - 'a'].second = i;
    }

    for(int i = 0;i < 26;++i)
    {
        sum += std::abs(hist[i].first - hist[i].second);
    }
    return sum;
    }
};
