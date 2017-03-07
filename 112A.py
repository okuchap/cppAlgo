def prim():
    distance[0] = 0
    parent[0] = -1

    while True:
        mincost = float('inf')
        for i in range(n):
            if color[i] != 'black' and distance[i] < mincost:
                mincost = distance[i]
                u = i
        if mincost == float('inf'):
            break

        color[u] = 'black'

        for v in range(n):
            if color[v] != 'black' and adjMat[u][v] != float('inf'):
                if adjMat[u][v] < distance[v]:
                    distance[v] = adjMat[u][v]
                    parent[v] = u
                    color[v] = 'gray'


n = int(input())
color = ['white'] * n
parent = [-1] * n
distance = [float('inf')] * n

adjMat = [[0] * n for _ in range(n)]
for i in range(n):
    adjRow = list(map(int, input().split()))
    for v, weight in enumerate(adjRow):
        if weight == -1:
            adjMat[i][v] = float('inf')
        else:
            adjMat[i][v] = weight

prim()

print(sum(distance))
