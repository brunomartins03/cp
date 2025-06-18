none, blue, red = 0, 1, 2
adj = {}
color = [none] * (len(adj) + 1)

def bfs(s):
    color[s] = blue
    q = [s]
    while q:
        u = q.pop(0)
        for v in adj[u]:
            if color[v] == none:
                color[v] = 3 - color[u]
                q.append(v)
            elif color[v] == color[u]: return False
    return True

def is_bipartite(n):
    for u in range(1, n + 1):
        if color[u] == none and not bfs(u): return False
    return True