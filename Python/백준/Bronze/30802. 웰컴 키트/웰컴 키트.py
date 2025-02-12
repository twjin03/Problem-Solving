import sys 

n = int(sys.stdin.readline()) # 참가자 수 
shirts = list(map(int, sys.stdin.readline().split()))

t, p = map(int, sys.stdin.readline().split()) # 셔츠 묶음, 펜 묶음 

s_cnt = 0
p_cnt = 0
p_one = 0 

for num in shirts:
    s_cnt += num // t
    if num % t: 
        s_cnt += 1

p_cnt = n // p
p_one = n % p 

print(s_cnt)
print(p_cnt, p_one)
