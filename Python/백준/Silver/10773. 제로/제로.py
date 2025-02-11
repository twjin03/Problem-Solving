
K = int(input())
lst = []

for i in range(K):
    num = int(input())
    if num:
        lst.append(num)
    else:
        lst.pop()

print(sum(lst)) 

