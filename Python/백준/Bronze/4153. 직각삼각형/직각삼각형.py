

while True:
    lst = list(map(int, input().split()))

    if sum(lst) == 0:
        break

    lst_sorted = sorted(lst)

    if lst_sorted[2]**2 == lst_sorted[0]**2 + lst_sorted[1]**2:
        print('right')
    else:
        print('wrong')



