#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>

void bfs(int start, std::unordered_map<int, std::unordered_set<int>>& graph)
{
	std::queue<int> q;
	std::unordered_set<int> visited;
	visited.insert(start);
	q.push(start);

	while (!q.empty())
	{
		size_t size = q.size();
		for (int i = 0; i < size; ++i)
		{
			int current = q.front();
			q.pop();

			for (const auto& neighbour : graph[current])
			{
				if (visited.find(neighbour) == visited.end())
				{
					q.push(neighbour);
					visited.insert(neighbour);
				}
			}
		}
	}
}
