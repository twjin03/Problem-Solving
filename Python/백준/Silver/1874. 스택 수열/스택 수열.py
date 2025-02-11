#####

stack = []
result = []

n = int(input())
a = []

for _ in range (n):
    a.append(int(input()))

i = 1

for num in a:
    while i <= num:
        stack.append(i)
        result.append('+')
        i+= 1 

    if stack[-1] == num:
        stack.pop()
        result.append('-')

    else:
        print('NO')
        exit()


for i in range(len(result)):
    print(result[i])

    

    