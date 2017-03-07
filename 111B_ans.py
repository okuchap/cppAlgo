n = int(input())
mat = [[0] * n for _ in range(n)]
d, f = [0] * n, [0] * n
for _ in range(n):
    adj = list(map(int, input().split()))
    i = adj[0]
    v = adj[2:]
    for j in v:
        mat[i - 1][j - 1] = 1
 
time, current = 0, 0
stack = []
while 0 in f:
    if not stack:
        for i, v in enumerate(f):
            if v == 0:
                stack.append(i)
                time += 1
                d[i] = time
                break
    time += 1
    current = stack[-1]
    for i in range(len(mat[current])):
        if mat[current][i] and not d[i]:
            current = i
            d[i] = time
            stack.append(i)
            break
    else:
        f[current] = time
        current = stack.pop()
 
for l in zip(range(1, n + 1), d, f):
    print(*l)