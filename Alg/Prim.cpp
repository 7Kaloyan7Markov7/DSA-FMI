#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <vector>

struct Edge
{
	int from = 0;
	int to = 0;
	int weight = 0;

	bool operator < (const Edge& other) const
	{
		return weight > other.weight;
	}
};

std::vector<Edge> prim(int countOfNodes, int start, std::unordered_map<int, std::vector<Edge>>& graph)
{
	std::priority_queue<Edge> q;
	std::unordered_set<int> visited;
	q.push({ start, start, 0 });

	std::vector<Edge> minTree;

	while (!q.empty() && visited.size() < countOfNodes)
	{
		const auto current = q.top();
		q.pop();

		if (visited.find(current.to) != visited.end()) continue;

		visited.insert(current.to);
		minTree.push_back(current);

		for (const auto& child : graph[current.to])
		{
			if (visited.find(child.to) == visited.end()) q.push(child);
		}
	}
	return minTree;
}
