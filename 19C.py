from sys import stdin
from heapq import heappop, heappush
readline = stdin.readline

heap = []
while True:
    line = readline()
    if line[1] == 'x':
        print(-heappop(heap))
    elif line[0] == 'i':
        heappush(heap, -int(line.split()[1]))
    else:
        break


'''
def insert(heap, key):
    heap.append(-1000000)
    heapIncreaseKey(heap, key)

def parent(i):
    return (i - 1) // 2

def heapIncreaseKey(heap, key):
    heap[len(heap) - 1] = key
    i = len(heap) - 1
    while i > 0 and heap[parent(i)] < heap[i]:
        heap[i], heap[parent(i)] = heap[parent(i)], heap[i]
        i = parent(i)

def heapExtractMax(heap):
    if len(heap) < 1:
        return None
    else:
        MAX = heap[0]
        heap[0] = heap.pop()
        maxHeapify(heap, 0)

        return MAX

def maxHeapify(heap, i):
    left = (i + 1) * 2 - 1
    right = (i + 1) * 2
    largest = left if left < len(heap) and heap[left] > heap[i] else i
    largest = right if right < len(heap) and heap[right] > heap[largest] else largest
    if largest != i:
        heap[i], heap[largest] = heap[largest], heap[i]
        maxHeapify(heap, largest)


heap = []
while True:
    line = sys.stdin.readline()
    if line[0] == 'i':
        insert(heap, int(line.split()[1]))
    elif line[0:2] == 'ex':
        print(str(heapExtractMax(heap)))
    else:
        break
'''