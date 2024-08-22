#include <bits/stdc++.h>
using namespace std;
const int MAX { 200010 };
bitset<MAX> visited;

vector<int> adj[MAX];

bool dfs(int u, int p = -1) {
    if(visited[u]) return false;
    visited[u] = true;
    for(auto v: adj[u]) {
        if(visited[v] and v != p) return true;
        if(dfs(v, u)) return true;
    }
    return false;
}

bool has_cycle(int n) {
    visited.reset();
    for(int u = 1; u <= n; u++)
        if(not visited[u] and dfs(u)) return true;
    return false;
}