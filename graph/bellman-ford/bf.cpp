#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using edge = tuple<int, int, int>;
const int oo { 1000000010 };

// O(VE)
pair<vi, vi> bellman_ford(int s, int n, const vector<edge>& edges) {
    vector<int> dist (n + 1, oo), pred (n + 1, oo);
    dist[s] = 0;
    pred[s] = s;

    for(int i = 1; i <= n - 1; i++) {
        for(auto [u, v, w]: edges)
            if(dist[u] < oo and dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pred[v] = u;
            }
    }
    return { dist, pred };
}

vector<pair<int, int>> path(int s, int u, const vector<int>& pred) {
    vector<pair<int, int>> p;
    int v = u;

    do {
        p.emplace_back(pred[v], v);
    } while(v != s);
    reverse(p.begin(), p.end());
    return p;
}

bool has_negative_cycle(int s, int n, const vector<edge>& edges) {
    vector<int> dist(n + 1, oo);
    dist[s] = 0;

    for(int i = 1; i <= n - 1; i++)
        for(auto [u, v, w]: edges)
            if(dist[u] < oo and dist[v] > dist[u] + w)
                dist[v] = dist[u] + w;
    
    for(auto [u, v, w]: edges)
        if(dist[u] < oo and dist[v] > dist[u] + w)
            return true;
    return false;
}