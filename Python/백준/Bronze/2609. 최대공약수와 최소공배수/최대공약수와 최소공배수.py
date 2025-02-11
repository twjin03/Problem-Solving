#####

# brute force 

def gcd_brute(a,b):
    min_num = min(a,b)
    for i in range(min_num, 0, -1):
        if a % i == 0 and b % i == 0:
            return i 


def lcm_brute(a,b):
    max_num = max(a,b)
    while True:
        if max_num % a == 0 and max_num % b == 0:
            return max_num
        max_num += max(a,b)

a,b = map(int, input().split())

print(gcd_brute(a,b))
print(lcm_brute(a,b))