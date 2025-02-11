import sys

n = int(input())
queue = []

for _ in range(n):
    commend = sys.stdin.readline().split()
    if commend[0] == 'push':
        queue.append(int(commend[1]))
    elif commend[0] == 'pop':
        print(queue.pop(0) if queue else '-1')
    elif commend[0] == 'size':
        print(len(queue))
    elif commend[0] == 'empty':
        print('1' if not queue else '0')
    elif commend[0] == 'front':
        print(queue[0] if queue else '-1')
    elif commend[0] == 'back':
        print(queue[-1] if queue else '-1')