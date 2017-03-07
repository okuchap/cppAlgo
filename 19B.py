def maxHeapify(heap, i):
    left = (i + 1) * 2 - 1
    right = (i + 1) * 2
    largest = left if left < len(heap) and heap[left] > heap[i] else i
    largest = right if right < len(heap) and heap[right] > heap[largest] else largest
    if largest != i:
        heap[i], heap[largest] = heap[largest], heap[i]
        maxHeapify(heap, largest)

def buildMaxHeap(heap):
    for i in range(len(heap) // 2, -1, -1):
        maxHeapify(heap, i)

n = int(input())
heap = list(map(int, input().split()))
buildMaxHeap(heap)

out = ''
for key in heap:
    out += (' {}'.format(str(key)))
print(out)