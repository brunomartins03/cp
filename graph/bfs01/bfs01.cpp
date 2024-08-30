#include <bits/stdc++.h>
using namespace std;
const int oo { 1000000010 };

vector<vector<pair<int, int>>> adj;

// O(V + E)
vector<int> bfs_01(int s, int n) {
    vector<int> dist (n + 1, oo);
    dist[s] = 0;
    deque<int> q;
    q.emplace_back(s);
    while(not q.empty()) {
        auto u = q.front();
        q.pop_front();
        for(auto [v, w]: adj[u])
            if(dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                w == 0 ? q.emplace_front(v) : q.emplace_back(v);
            }
    }
    return dist;
}