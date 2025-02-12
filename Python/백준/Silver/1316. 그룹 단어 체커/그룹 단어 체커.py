import sys 

n = int(sys.stdin.readline())

cnt = 0
for _ in range (n):
    word = sys.stdin.readline().strip() # 개행문자 제거
    checked = [] 
    
    
    is_group = True
    for char in word:
        if char not in checked:
            checked.append(char)
        else:
            if char == checked[-1]:
                continue
            else:
                is_group = False
                break
    
    if is_group:
        cnt += 1

print(cnt)