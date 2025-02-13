

import sys

n = sys.stdin.readline()

lst = []

for char in n:
    lst.append(char)

lst.sort(reverse=True)

result = "".join(lst)

print(int(result))

    
