from heapq import heapify, heappop, heappush
INF = float('inf')


def dijkstra(source):
    distance[source] = 0
    heap = distance.copy()
    heapify(heap)

    while len(heap) > 0:
        u = heappop(heap)
        color[u] = 'black'

        for v in adjMat[u]:
            if adjMat[u][v] != INF and color[v] != 'black':
                if distance[u] + adjMat[u][v] < distance[v]:
                    distance[v] = distance[u] + adjMat[u][v]
                    parent[v] = u
                    color[v] = 'gray'
                    # heap.update( v )とは？


n = int(input())
color = ['white'] * n
parent = [-1] * n
distance = [INF] * n

adjMat = [[INF] * n for _ in range(n)]
for i in range(n):
    inputList = list(map(int, input().split()))
    adjRow = inputList[0::2][1:]
    weightRow = inputList[1::2][1:]
    for v, weight in zip(adjRow, weightRow):
        adjMat[i][v] = weight

dijkstra(0)

for index, distance in enumerate(distance):
    print(('{} {}').format(index, distance))