#include <bits/stdc++.h>
using namespace std;

vector<int> dfs_low, dfs_num, adj[];

int dfs_ap(int u, int p, int& next, set<int>& points) {
    int children = 0;
    dfs_low[u] = dfs_num[u] = next++;
    for(auto v: adj[u]) {
        if(not dfs_num[v]) {
            ++children;
            dfs_ap(v, u, next, points);

            if(dfs_low[v] >= dfs_num[u])
                points.insert(u);
            dfs_low[u] = min(dfs_low[u], dfs_low[v]);
        } else if(v != p)
            dfs_low[u] = min(dfs_low[u], dfs_num[v]);
    }
    return children;
}

set<int> articulation_points(int n) {
    dfs_num.assign(n + 1, 0);
    dfs_low.assign(n + 1, 0);
    set<int> points;
    for(int u = 1, next = 1; u <= n; u++)
        if(not dfs_num[u]) {
            auto children = dfs_ap(u, u, next, points);
            if(children == 1) points.erase(u);
        }
    return points;
}