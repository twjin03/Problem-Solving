n =  int(input())

lst = [tuple(map(int, input().split())) for _ in range(n)]

sorted_lst = sorted(lst, key = lambda x: (x[0], x[1]))

for i in range(n):
    print(sorted_lst[i][0], sorted_lst[i][1])