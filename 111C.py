from collections import deque


def bfs(root):
    Q = deque()
    distance[root] = 0
    Q.append(root)
    i = root
    while len(Q) > 0:
        i = Q.popleft()
        for v in range(n):
            if adjMat[i][v] == 1 and color[v] == 'white':
                Q.append(v)
                color[v] = 'gray'
                distance[v] = distance[i] + 1
        color[i] = 'black'


n = int(input())
adjMat = [[0] * n for _ in range(n)]
color = ['white'] * n
distance = [-1] * n

for _ in range(n):
    adj = list(map(int, input().split()))
    i = adj[0]
    v = adj[2:]
    for j in v:
        adjMat[i - 1][j - 1] = 1

bfs(0)

for i in range(n):
    out = ''
    out += '{} {}'.format(i + 1, distance[i])
    print(out)
