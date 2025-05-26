class Solution {
public:
    bool dfs(vector<vector<int>>& adj, vector<int>& visited, int curr, int color) {
        visited[curr] = color;
        for (int neighbor : adj[curr]) {
            if (visited[neighbor] == -1) {
                if (!dfs(adj, visited, neighbor, 1 - color))
                    return false;
            } else if (visited[neighbor] == color) {
                return false;
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& adj) { 
        int n = adj.size();
        vector<int> visited(n, -1);
        for (int i = 0; i < n; ++i) {
            if (visited[i] == -1) {
                if (!dfs(adj, visited, i, 0))
                    return false;
            }
        }
        return true;
    }
};
