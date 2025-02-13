import sys

while True: 
    n = int(sys.stdin.readline().strip())  # 개행 문자 제거
    
    if n == -1:
        break 

    lst = [i for i in range(1, n) if n % i == 0]  # 약수 리스트 생성

    if sum(lst) == n:  # 완전수인지 확인
        print(f"{n} = {' + '.join(map(str, lst))}")  # 리스트 요소를 문자열로 변환 후 출력
    else:
        print(f"{n} is NOT perfect.")