class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        std::unordered_map<int, int> m;

        for(int i = 0;i < candyType.size();++i)
        {
            if(m.size() < candyType.size() / 2)
            {
                if(!m.contains(candyType[i]))
                {
                    m[candyType[i]];
                }
            }
        }
        return m.size();
    }
};
