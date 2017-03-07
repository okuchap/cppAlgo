def dfs_recursive(u):
    global time
    color[u] = 'gray'
    arrive[u] = time
    time += 1
    for v in range(n):
        if adjMat[u][v] == 1 and color[v] == 'white':
            dfs_recursive(v)
    color[u] = 'black'
    finish[u] = time
    time += 1


n = int(input())

adjMat = [[0] * n for _ in range(n)]
color = ['white'] * n
arrive = [0] * n
finish = [0] * n
time = 1

for _ in range(n):
    adj = list(map(int, input().split()))
    i = adj[0]
    v = adj[2:]
    for j in v:
        adjMat[i - 1][j - 1] = 1

for root in range(n):
    if color[root] == 'white':
        dfs_recursive(root)


for i in range(n):
    out = ''
    out += '{} {} {}'.format(i + 1, arrive[i], finish[i])
    print(out)
