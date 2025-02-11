

n = int(input())
lst = tuple(input().split() for _ in range(n)) 

###
sorted_lst = sorted(enumerate(lst), key = lambda x: (int(x[1][0]), x[0]))

for _, (a, b) in sorted_lst:
    print(a, b)