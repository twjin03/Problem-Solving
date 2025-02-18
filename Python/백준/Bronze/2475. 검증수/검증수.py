
n = map(int, input().split())

sum_square = 0 

for x in n:
    sum_square += x**2

print(sum_square%10)