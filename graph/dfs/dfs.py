visited = set()
adj = {}
def dfs(u):
    if u not in visited: return
    visited.add(u)
    for v in adj[u]: dfs(v)