#include <bits/stdc++.h>
using namespace std;
const int none = 0, red = 1, blue = 2, MAX = 200010;

vector<int> adj[MAX], color(MAX, none);

bool bfs(int s) {
    queue<int> q;
    color[s] = red;
    q.push(s);
    while(not q.empty()) {
        auto u = q.front(); q.pop();
        for(auto v: adj[u]) {
            if(color[v] == none) {
                color[v] = 3 - color[u];
                q.push(v);
            } else if(color[v] == color[u]) return false;
        }
    }
    return true;
}

bool is_bipartite(int n) {
    for(int u = 1; u <= n; u++)
        if(color[u] == none and not bfs(u)) return false;
    return true;
}