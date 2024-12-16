#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

void dfs(int start, std::unordered_map<int, std::unordered_set<int>>& graph, std::unordered_set<int>& visited)
{
	visited.insert(start);

	for (const auto& neighbour : graph[start])
	{
		if (visited.find(neighbour) == visited.end())
		{
			dfs(neighbour, graph, visited);
		}
	}
}
