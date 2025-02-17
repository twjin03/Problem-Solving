import sys 

word = sys.stdin.readline().strip()

lst = []
for char in word:
    lst.append(char)

i = 0
j = len(lst) -1

while i < j:
    if lst[i] != lst[j]:
        print(0)
        exit()
    else:
        i += 1
        j -= 1
        
print(1)
