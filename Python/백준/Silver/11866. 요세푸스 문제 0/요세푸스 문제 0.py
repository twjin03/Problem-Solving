import sys 
from collections import deque

n, k = map(int, sys.stdin.readline().split())
# n 명의 사람, k번째 사람 제거 

queue = deque(range(1, n+1)) # 1부터 n까지 숫자를 queue에 저장
result = []


while queue: # queue에 있는 모든 사람이 제거될 때까지 
    queue.rotate(-(k-1))
    result.append(queue.popleft())

print("<" + ", ".join(map(str,result)) + ">")
    