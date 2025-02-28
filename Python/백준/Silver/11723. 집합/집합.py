import sys

n = int(sys.stdin.readline())
s = set()  # 집합으로 처리 (중복 방지 + 빠른 탐색)

def add(x):
    s.add(x)

def remove(x):
    s.discard(x)  # 없는 경우 에러 방지하고 삭제

def check(x):
    print(1 if x in s else 0)

def toggle(x):
    if x in s:
        s.remove(x)
    else:
        s.add(x)

def all():
    global s
    s = set(range(1, 21))  # 1~20까지 모두 넣기

def empty():
    global s
    s = set()  # 비우기

# 명령어 매핑 딕셔너리
switch = {
    'add': add,
    'remove': remove,
    'check': check,
    'toggle': toggle,
    'all': all,
    'empty': empty,
}

for _ in range(n):
    inst_x = sys.stdin.readline().strip().split()
    
    cmd = inst_x[0]
    if cmd in ['add', 'remove', 'check', 'toggle']:
        x = int(inst_x[1])  # 정수로 변환
        switch[cmd](x)
    else:
        switch[cmd]()  # all, empty는 인자 없음
