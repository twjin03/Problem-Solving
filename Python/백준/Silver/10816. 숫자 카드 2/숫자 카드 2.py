import sys 

n = int(sys.stdin.readline())
card = list(map(int, sys.stdin.readline().split()))

m = int(sys.stdin.readline())
find = list(map(int, sys.stdin.readline().split()))

card_cnt = {} # 카드 개수 저장 딕셔너리 (숫자:개수)

for num in card:  # 카드 개수를 미리 저장
    card_cnt[num] = card_cnt.get(num, 0) + 1

# 딕셔너리에서 각 개수 찾아 리스트에 저장 
result = [card_cnt.get(num, 0) for num in find]

for i in range(m):
    print(result[i], end = ' ')