# なぜうまくいかない？

from collections import deque


def dfs(root):
    global time
    stack.append(root)
    color[root] = 'gray'
    discovery[root] = time
    time += 1

    while len(stack) > 0:
        node = stack[-1]
        for next in range(n):
            if adjMat[node][next] == 1:
                if color[next] == 'white':
                    color[next] = 'gray'
                    discovery[next] = time
                    time += 1
                    stack.append(next)
                    break
        # In case there in no adjacent node whose color is white
        color[node] = 'black'
        finish[node] = time
        time += 1
        stack.pop()


n = int(input())

adjMat = [[0] * n for _ in range(n)]
color = ['white'] * n
stack = deque()
discovery = [0] * n
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
        dfs(root)

for i in range(n):
    out = ''
    out += '{} {} {}'.format(i + 1, discovery[i], finish[i])
    print(out)
