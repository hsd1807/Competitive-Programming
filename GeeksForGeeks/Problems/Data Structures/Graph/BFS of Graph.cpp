class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        vector<int> bfs;
        vector<bool> visited(adj.size(), 0);
        queue<int> q;
        q.push(0);
        bfs.push_back(0);
        visited[0] = 1;
        
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            for (int i = 0; i < adj[node].size(); i++) {
                if (!visited[adj[node][i]]) {
                    bfs.push_back(adj[node][i]);
                    q.push(adj[node][i]);
                    visited[adj[node][i]] = 1;
                }
            }
        }
        
        return bfs;
    }
};
