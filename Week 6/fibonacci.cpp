#include <iostream>
#include <vector>

int getFibNum(int n, std::vector<int> vec)
{
	if (n == 1) return 1;
	if (n == 0) return 0;

	if (vec[n] != -1) return vec[n];

	return vec[n] = getFibNum(n - 1, vec) + getFibNum(n - 2, vec);
}

int getFibWrapper(int n)
{
	std::vector<int> vec(n + 1, -1);
	
	return getFibNum(n, vec);
}
