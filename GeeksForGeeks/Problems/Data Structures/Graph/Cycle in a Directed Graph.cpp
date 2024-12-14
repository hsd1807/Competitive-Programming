class Solution {
  public:
    bool dfs(int vertex, vector<vector<int>>& adj, vector<bool>& visited) {
        if (visited[vertex]) {
            for (int i = 0; i < adj[vertex].size(); i++) {
                if (visited[adj[vertex][i]]) {
                    return 1;
                }
            }
            return 0;
        }
        visited[vertex] = 1;
        for (int i = 0; i < adj[vertex].size(); i++) {
            bool cycle = dfs(adj[vertex][i], adj, visited);
            if (cycle) return 1;
        }
        visited[vertex] = 0;
        return 0;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<vector<int>> adj) {
        vector<bool> visited(V, 0);
        bool cycle = 0;
        for (int i = 0; i < adj.size(); i++) {
            if (!visited[i]) {
                cycle = dfs(i, adj, visited);
                if (cycle) {
                    break;
                }
            }
        }
        return cycle;
    }
};
