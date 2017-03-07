def lcm(x,y):
    cost = [0]
    for char in y:
        for i in range(len(cost) - 1, -1, -1):
            index = x.find(char, cost[i]) + 1
            if index: # charがxのcost[i]番目以降に含まれる文字のとき
                if i + 1 < len(cost):
                    cost[i + 1] = min(cost[i + 1], index)
                else:
                    cost.append(index)
    return len(cost) - 1

