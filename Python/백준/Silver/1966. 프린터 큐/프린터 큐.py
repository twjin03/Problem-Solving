
import sys

### 
from collections import deque

# test case 개수 
t = int(sys.stdin.readline())

for _ in range (t):
    # 테케 시작
    n, idx  = map(int, sys.stdin.readline().split()) # 문서의 수, 인쇄 순서를 찾을 문서의 위치 
    docs_pri = list(map(int, sys.stdin.readline().split()))

    # 프린터 큐 생성 (원래위치, 우선순위)
    queue = deque((i, pri) for i, pri in enumerate(docs_pri)) 

    # 프린트 진행 

    # 현재 문서가 가장 우선순위가 높은 문서라면, 인쇄 
    # 그렇지 않다면, 현재 문서를 가장 뒤에 재배치 

    cnt = 0
    

    while queue:
        is_first = True
        cur = queue.popleft()

        for x in queue:
            if cur[1] < x[1]:
                queue.append(cur)
                is_first = False
                break
        
        if is_first:
            cnt += 1
            if cur[0] == idx:
                print(cnt)
                break
            





