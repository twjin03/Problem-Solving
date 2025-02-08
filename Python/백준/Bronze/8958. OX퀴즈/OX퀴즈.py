a = int(input())


for i in range(a):
    grade = 0
    score = 0
    oxstring = input()
    for j in range(len(oxstring)):
        if oxstring[j] == "O":
            score += 1
        if oxstring[j] == "X":
            score = 0

        grade += score
    print(grade)


