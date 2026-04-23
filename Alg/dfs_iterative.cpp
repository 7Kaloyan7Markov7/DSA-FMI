#include <iostream>
#include <stack>
#include <unordered_set>
#include <unordered_map>

void dfs_iterative(int start, std::unordered_map<int, std::unordered_set<int>>& graph)
{
  std::stack<int> s;
  s.push(start);
  std::unordered_set<int> visited;

  while(!s.empty())
    {
      int current = s.top();
      s.pop();

      if (visited.count(current)) continue;
      visited.insert(current);

      for(const auto& child : graph[current])
        {
          if(!visited.count(child)) s.push(child);
        }
    }
}
