import sys 

lst = []
for _ in range(5):
    lst.append(int(sys.stdin.readline()))

total = sum(lst)
sorted_lst = sorted(lst)
print(total//5)
print(sorted_lst[2])

