#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <vector>

struct Edge
{
	int from = 0;
	int weight = 0;
	int to = 0;
};

std::vector<int> bellman(int start, int countOfNodes, std::vector<Edge>& graph)
{
	std::vector<int> distances(countOfNodes, INT_MAX);

	for (int i = 0; i < countOfNodes - 1; ++i)
	{
		for (const auto& current : graph)
		{
			if (distances[current.from] != INT_MAX && distances[current.from] + current.weight < distances[current.to])
			{

				distances[current.to] = distances[current.from] + current.weight;

			}
		}
	}
	return distances;
}
