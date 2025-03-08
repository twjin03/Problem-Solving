# 1654 랜선자르기 

import sys 

# 갖고 있는 랜선 개수 k, 필요한 랜선 수 n 항상 k<=n
k, n = map(int, sys.stdin.readline().split())

# 랜선 길이 
lan_lst = []
for _ in range(k):
    lan_lst.append(int(sys.stdin.readline()))

# 이분탐색 
lan_lst.sort(reverse=True)
start = 1 
end = lan_lst[0]

result = 0

cnt = 0 
while start <= end:
    mid = (start + end) // 2
    cnt = sum(num // mid for num in lan_lst)
    
    if cnt >= n:
        result = mid 
        start = mid + 1
    else:
        end = mid - 1

print (result)


