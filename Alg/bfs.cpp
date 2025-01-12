#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <vector>

void bfs(int start, std::unordered_map<int, std::unordered_set<int>>& graph)
{
	std::unordered_set<int> visited;
	std::queue<int> q;

	visited.insert(start);
	q.push(start);

	while (!q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; ++i)
		{
			int current = q.front();
			q.pop();

			for (const auto& child : graph[current])
			{
				if (visited.find(child) == visited.end())
				{
					q.push(child);
					visited.insert(child);
				}
			}
		}
	}
}
