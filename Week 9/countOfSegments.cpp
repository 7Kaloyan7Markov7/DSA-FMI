#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

std::unordered_map<int, std::unordered_set<int>> graph;
void dfs(int current, std::unordered_map<int, std::unordered_set<int>>& graph, std::unordered_set<int>& visited)
{
	visited.insert(current);

	for (const auto& child : graph[current])
	{
		if (visited.find(child) == visited.end())
			dfs(child, graph, visited);
	}
}

int solve()
{
	int X, Y = 0;
	std::cin >> X >> Y;
	for (int i = 0; i < X; ++i) graph[i];
	for (int i = 0; i < Y; ++i)
	{
		int node1, node2 = 0;
		std::cin >> node1 >> node2;

		graph[node1].insert(node2);
		graph[node2].insert(node1);
	}

	std::unordered_set<int> visited;
	int counter = 0;

	for (const auto& child : graph)
	{
		if (visited.find(child.first) != visited.end()) continue;
		dfs(child.first, graph, visited);
		counter++;
	}

	graph.clear();
	return counter;
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int T = 0;
	std::cin >> T;
	for (int i = 0; i < T; ++i)
	{
		int result = solve();
		std::cout << result << " ";
	}
	return 0;
}
