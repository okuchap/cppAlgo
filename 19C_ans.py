from sys import stdin
from heapq import heappop, heappush
readline = stdin.readline

heap = []
while True:
    line = readline()
    if line[1] == 'x':print(-heappop(heap))
    elif line[0] == 'i':heappush(heap, -int(line.split()[1]))
    else:break