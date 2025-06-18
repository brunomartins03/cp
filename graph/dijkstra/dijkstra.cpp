#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using edge = tuple<int, int, int>;
using ii = pair<int, int>;
const int oo { 1000000010 };
bitset<100000> processed;

vector<vector<pair<int, int>>> adj;

// O(E + VlogV)
pair<vi, vi> dijkstra(int s, int n) {
    vector<int> dist(n + 1, oo), pred(n + 1, oo);
    dist[s] = 0;
    pred[s] = s;
    processed.reset();
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    pq.emplace(0, s);

    while(not pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if(processed[u]) continue;
        processed[u] = true;
        for(auto [v, w]: adj[u]) {
            if(dist[v] > d + w) {
                dist[v] = d + w;
                pred[v] = u;
                pq.emplace(dist[v], v);
            }
        }
    }
    return { dist, pred };
}

vector<ii> path(int s, int u, const vector<int>& pred) {
    vector<ii> p;
    int v = u;
    do {
        p.push_back(ii(pred[v], v));
        v = pred[v];
    } while(v != s);

    reverse(p.begin(), p.end());
    return p;
}