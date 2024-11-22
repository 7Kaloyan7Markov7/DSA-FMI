class Solution {
public:

    int climbStarsWrapped(int n, std::vector<int>& vec)
    {
        if(n == 1) return 1;
        if(n == 2) return 2;
        if(vec[n] != -1) return vec[n];

        return vec[n] = climbStarsWrapped(n - 1, vec) + climbStarsWrapped(n - 2, vec);
    }

    int climbStairs(int n) {
        std::vector<int> vec(n + 1, - 1);
        return climbStarsWrapped(n, vec);
    }
};
