from collections import deque


def bfs(root):
    global time
    Q = deque()
    distance[root] = 0
    Q.append(root)
    i = root
    while len(Q) > 0:
        i = Q.popleft()
        for v in adjDict[i]:
            if color[v] == 'white':
                Q.append(v)
                color[v] = 'gray'
                distance[v] = distance[i] + 1
        color[i] = 'black'
        label[i] = time


firstline = list(map(int, input().split()))

n = firstline[0]
adjDict = {i: [] for i in range(n)}
color = ['white'] * n
distance = [-1] * n
label = [-1] * n

m = firstline[1]
for _ in range(m):
    adj = list(map(int, input().split()))
    adjDict[adj[0]].append(adj[1])
    adjDict[adj[1]].append(adj[0])

time = 0
for i in range(n):
    if color[i] == 'white':
        bfs(i)
        time += 1

q = int(input())
for _ in range(q):
    question = list(map(int, input().split()))
    if label[question[0]] == label[question[1]]:
        print('yes')
    else:
        print('no')
