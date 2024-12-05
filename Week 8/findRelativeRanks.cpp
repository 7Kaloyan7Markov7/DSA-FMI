class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        std::priority_queue<std::pair<int, int>> pq;
        std::vector<std::string> res(score.size());

        for(int i = 0; i < score.size(); ++i) {
            pq.push({score[i], i});
        }

        int rank = 1;
        while(!pq.empty()) {
            int index = pq.top().second; 
            if(rank == 1) {
                res[index] = "Gold Medal";
            } else if(rank == 2) {
                res[index] = "Silver Medal";
            } else if(rank == 3) {
                res[index] = "Bronze Medal";
            } else {
                res[index] = std::to_string(rank);
            }
            pq.pop();
            rank++;
        }

        return res;
    }
};
