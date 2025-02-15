# A - Z : 65 - 90
# a - z : 97 - 122
# 대소문자 각각 32차이! 

import sys 

word = sys.stdin.readline().strip()

lst = [0]*26
# 0 - 25
for char in word:
    lst[ord(char.upper()) - 65] += 1

max_val = max(lst)
max_idx = [i for i, v in enumerate(lst) if v == max_val] 

if len(max_idx) > 1:
    print('?')
else:
    print(chr(max_idx[0] + 65))

