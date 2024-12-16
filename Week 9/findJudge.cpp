class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size() < n - 1) return -1;

        std::vector<int> inDegree(n + 1, 0);
        std::vector<int> outDegree(n + 1, 0);

        for(auto& relation : trust)
        {
            outDegree[relation[0]]++;
            inDegree[relation[1]]++;
        }

        for(int i = 1;i <= n;++i)
        {
            if(inDegree[i] == n - 1 && outDegree[i] == 0)
            return i;
        }
        return -1;
    }
};
