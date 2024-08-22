#include <bits/stdc++.h>
using namespace std;

const int MAX { 200010 };
bitset<MAX> visited;
vector<int> adj[MAX];

void dfs(int u) {
    if(visited[u]) return;
    visited[u] = true;
    for(auto v: adj[u]) dfs(v);
}

int connected_components(int n) {
    int counter = 0;
    visited.reset();
    for(int i = 1; i <= n; i++) {
        if(not visited[i]) {
            counter++;
            dfs(i);
        }
    }
    return counter;
}