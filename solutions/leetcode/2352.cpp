class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size(), counter = 0;
        multiset<vector<int>> s;
        for (int i = 0; i < n; i++) s.emplace(grid[i]);
        for (int i = 0; i < n; i++) {
            vector<int> v (n);
            for (int j = 0; j < n; j++) v[j] = grid[j][i];
            counter += s.count(v);
        }
        return counter;
    }
};