#include <bits/stdc++.h>
using namespace std;
const int oo { 1000000010 };
using vi = vector<int>;
using vvi = vector<vi>;
using ii = pair<int, int>;

vector<vector<ii>> adj;

pair<vvi, vvi> floyd_warshall(int n) {
    vvi dist(n + 1, vi(n + 1, oo)), pred (n + 1, vi (n + 1, oo));

    for(int u = 1; u <= n; u++) {
        dist[u][u] = 0;
        pred[u][u] = u;
        for(auto [v, w]: adj[u]) {
            dist[u][v] = w;
            pred[u][v] = u;
        }
    }

    for(int k = 1; k <= n; k++)
        for(int u = 1; u <= n; u++)
            for(int v = 1; v <= n; v++)
                if(dist[u][k] < oo and dist[k][v] < oo and dist[u][v] > dist[u][k] + dist[k][v]) {
                    dist[u][v] = dist[u][k] + dist[k][v];
                    pred[u][v] = pred[k][v];
                }
    return { dist, pred };
}

vector<ii> path(int u, int v, const vvi& pred) {
    vector<ii> p;
    do {
        p.push_back(ii(pred[u][v], v));
        v = pred[u][v];
    } while(v != u);

    reverse(p.begin(), p.end());
    return p;
}