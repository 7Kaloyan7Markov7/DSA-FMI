#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <vector>

void dfs(int current, std::unordered_map<int, std::unordered_set<int>>& graph, std::unordered_set<int>& visited)
{
	visited.insert(current);

	for (const auto& child : graph[current])
	{
		if (visited.find(child) == visited.end())
			dfs(child, graph, visited);
	}
}
