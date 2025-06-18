adj = {}
visited = set()

def dfs(u):
    if u in visited: return
    visited.add(u)
    for v in adj[u]: dfs(v)
 

def connected_components(n):
    counter = 0
    for i in range(1, n + 1):
        if i not in visited:
            counter += 1
            dfs(i)
    return counter