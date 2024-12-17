std::vector<int> bfsPathsFromNode(int n, int m, std::vector<std::vector<int>> edges, int s)
{
	std::unordered_map<int, std::unordered_set<int>> graph;
	int start = s - 1;

	for (int i = 0; i < n; ++i)
	{
		graph[i];
	}

	for (int i = 0; i < m; ++i)
	{
		int node1 = edges[i][0];
		int node2 = edges[i][1];

		graph[node1 - 1].insert(node2 - 1);
		graph[node2 - 1].insert(node1 - 1);
	}

	std::queue<int> q;
	std::unordered_set<int> visited;

	std::vector<int> res(n, -1);
	visited.insert(start);
	res[start] = 0;

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
					visited.insert(child);
					q.push(child);
					res[child] = res[current] + 6;
				}
			}
		}
	}

	std::vector<int> actualRes;
	for (int i = 0; i < n; ++i)
	{
		if (i != start)
		{
			actualRes.push_back(res[i]);
		}
	}

	return actualRes;
}
