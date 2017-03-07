def longest_common(x, y):
    cost = [0]
    for c in y:
        for i in range(len(cost) -1, -1, -1):
            index = x.find(c, cost[i]) + 1
            if index:
                if i + 1 < len(cost):
                    cost[i + 1] = min(cost[i + 1], index)
                else:
                    cost.append(index)
    return len(cost)  - 1
             
 
n = int(input())
for _ in range(n):
    x = input()
    y = input()
    print(longest_common(x, y))