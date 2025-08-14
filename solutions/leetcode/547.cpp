class Solution {
public:
    void dfs(int node, vector<vector<int>>& matrix, vector<bool>& visited) {
        if (visited[node]) return;
        visited[node] = true;
        for (int v = 0; v < matrix.size(); v++)
            if (matrix[node][v] && v != node)
                dfs(v, matrix, visited);
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size(), clusters = 0;
        vector<bool> visited (n, false);
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                clusters++;
                dfs(i, isConnected, visited);
            }
        }
        return clusters;
    }
};

