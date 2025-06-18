#include <bits/stdc++.h>
using namespace std;
const int oo { 1000000010 };
vector<int> adj[];

// O(N + M)
vector<int> bfs(int s, int n){
    vector<int> dist (n + 1, oo);
    queue<int> q;
    dist[s] = 0; q.push(s);
    while(not q.empty()){
        auto u = q.front(); q.pop();
        for(auto v: adj[u]){
            if(dist[v] == oo) {
                dist[v] = dist[u] + 1; q.push(v);
            }
        }
    }
    return dist;
}