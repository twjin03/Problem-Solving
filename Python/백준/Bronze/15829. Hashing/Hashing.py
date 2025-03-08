# 15829 Hashing
'''
해시 함수 = 임의의 길이의 입력을 받아서 고정된 길이의 출력 내보냄 
-> 자료 저장과 탐색에 쓰임 

총 26개의 알파벳 존재, 각 알파벳에 1~26까지의 고유번호 부여 
=> 하나의 문자열을 수열로 변환 가능 
'''

import sys

r = 31
M = 1234567891

# 문자열 길이 입력
l = int(sys.stdin.readline())

# 문자열 입력 (개행 제거)
string = sys.stdin.readline().strip()

# 해시 값 계산
H = 0
for i, char in enumerate(string):
    H = (H + ((ord(char) - 96) * pow(r, i, M)) % M) % M
    # H = (H + ((ord(char) - 96) * pow(r, i)) % M) % M

print(H)

