import sys 



a = int(input())
num = []

for i in range(a):
    num.append(int(sys.stdin.readline()))

num.sort()

for n in num:
    print(n)

