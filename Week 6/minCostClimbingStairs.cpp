class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int costs[1000]{};
        costs[0] = cost[0];
        costs[1] = cost[1];

        for(int i = 2;i < cost.size();++i)
        {
            costs[i] = cost[i] + std::min(costs[i - 1], costs[i - 2]);
        }

        return std::min(costs[cost.size() - 1], costs[cost.size() - 2]);
    }
};
