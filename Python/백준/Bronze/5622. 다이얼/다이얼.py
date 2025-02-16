import sys

word = sys.stdin.readline().strip()

time_sum = 0

for char in word:
    if char in "ABC":
        time_sum += 3
    elif char in "DEF":
        time_sum += 4
    elif char in "GHI":
        time_sum += 5
    elif char in "JKL":
        time_sum += 6
    elif char in "MNO":
        time_sum += 7
    elif char in "PQRS":
        time_sum += 8
    elif char in "TUV":
        time_sum += 9
    elif char in "WXYZ":
        time_sum += 10

print(time_sum)
