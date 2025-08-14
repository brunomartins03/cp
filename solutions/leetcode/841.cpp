class Solution {
public:
    void dfs(int u, vector<vector<int>>& adj, vector<bool>& visited, int& visits) {
        if (visited[u]) return;
        visited[u] = true;
        visits++;
        for (auto v : adj[u]) dfs(v, adj, visited, visits);
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int size = rooms.size(), visits = 0;
        vector<bool> visited (size, false);
        dfs(0, rooms, visited, visits);
        return visits == size;
    }
};

