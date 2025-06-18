oo = 1000000010
adj = {}

def bfs(s):
    q = []
    dist = [oo] * (len(adj) + 1)
    dist[s] = 0
    q.append(s)
    while q:
        u = q.pop(0)
        for v in adj[u]:
            if dist[v] == oo:
                dist[v] = dist[u] + 1
                q.append(v)
    return dist