adj = {}
visited = set()

def dfs(u, p = -1):
    if u in visited: return False
    visited.add(u)
    for v in adj[u]:
        if v in visited and v != p: return True
        if dfs(v, u): return True
    return False

def has_cycle(n):
    for u in range(1, n + 1):
        if u not in visited and dfs(u): return True
    return False