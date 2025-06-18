#include <bits/stdc++.h>
using namespace std;
const int MAX { 200010 };

vector<int> adj[MAX];
bitset<MAX> visited;

// O(N + M)
void dfs(int u){
    if(visited[u]) return;
    visited[u] = true;
    for(auto v: adj[u]) dfs(v);
}