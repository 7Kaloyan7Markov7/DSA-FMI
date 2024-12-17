std::unordered_map<int, std::unordered_set<int>> graph;
//1 is being processed
//2 already passed
//0 yet to pass

bool dfs(int current, std::unordered_map<int, std::unordered_set<int>>& graph, std::unordered_map<int, int>& visited)
{
	visited[current] = 1;

	for (const auto& child : graph[current])
	{
		if (visited[child] == 1) return true;
		if (visited[child] == 2) continue;
		if(dfs(child, graph, visited)) return true;
	}

	visited[current] = 2;
	return false;
}

bool hasCycle(std::unordered_map<int, std::unordered_set<int>>& graph)
{
	std::unordered_map<int, int> visited;

	for (const auto& current : graph)
	{
		if (visited[current.first] != 0) continue;
		if (dfs(current.first, graph, visited)) return true;
	}
	return false;
}

bool solve()
{
	int V, E = 0;
	std::cin >> V >> E;

	for (int i = 0; i < V; ++i) graph[i];

	for (int i = 0; i < E; ++i)
	{
		int node1, node2, kg = 0;
		std::cin >> node1 >> node2 >> kg;

		graph[node1].insert(node2);
	}

	bool result = hasCycle(graph);
	graph.clear();
	return result;
}

int main()
{
	int N = 0;
	std::cin >> N;

	for (int i = 0; i < N; ++i)
	{
		std::string result = solve() ? "true" : "false";
		std::cout << result << " ";
	}
}
