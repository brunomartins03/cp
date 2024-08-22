visited = set()
adj = {}
def dfs(u):
    if u in visited: return
    visited.add(u)
    for v in adj[u]: dfs(v)