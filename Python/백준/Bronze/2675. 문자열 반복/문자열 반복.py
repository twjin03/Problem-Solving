a = int(input())

for i in range (a):
  r, s = input().split()
  for i in range(len(s)):
    print(s[i]*int(r), end='')
  print()