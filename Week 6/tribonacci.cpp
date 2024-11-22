class Solution {
public:
    int tribonacciWrapped(int n, std::vector<int>& vec)
    {
        if(n == 1 || n == 2) return 1;
        if(n == 0) return 0;
        if(vec[n] != -1) return vec[n];

        return vec[n] = tribonacciWrapped(n - 1, vec) + tribonacciWrapped(n - 2, vec) + tribonacciWrapped(n - 3, vec);
    }

    int tribonacci(int n) {
        std::vector<int> vec(n + 1, -1);

        return tribonacciWrapped(n, vec);
    }
};
