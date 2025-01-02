#include <iostream>
#include <vector>
using namespace std;

enum class State { kInit, kVisiting, kVisited };

class Solution {
 public:
  bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<vector<int>> graph(numCourses);
    vector<State> states(numCourses, State::kInit);

    for (const vector<int>& prerequisite : prerequisites) {
      const int u = prerequisite[1];
      const int v = prerequisite[0];
      graph[u].push_back(v);
    }

    for (int i = 0; i < numCourses; ++i)
      if (hasCycle(graph, i, states))
        return false;

    return true;
  }

 private:
  bool hasCycle(const vector<vector<int>>& graph, int u, vector<State>& states) {
    if (states[u] == State::kVisiting)
      return true;
    if (states[u] == State::kVisited)
      return false;

    states[u] = State::kVisiting;
    for (const int v : graph[u])
      if (hasCycle(graph, v, states))
        return true;
    states[u] = State::kVisited;

    return false;
  }
};

int main() {
  Solution solution;
  int numCourses = 4;
  vector<vector<int>> prerequisites = {{1, 0}, {2, 1}, {3, 2}};

  if (solution.canFinish(numCourses, prerequisites)) {
    cout << "It is possible to finish all courses & no cycle detected" << endl;
  } else {
    cout << "It is not possible to finish all courses & cycle detected" << endl;
  }

  return 0;
}