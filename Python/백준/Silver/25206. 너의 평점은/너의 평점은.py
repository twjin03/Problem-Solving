
import sys

grade_lst = []
grade_dict = {
            'A+':4.5, 
            'A0':4.0,
            'B+':3.5,
            'B0':3.0,
            'C+':2.5,
            'C0':2.0,
            'D+':1.5,
            'D0':1.0,
            'F'	:0.0
            }

for _ in range (20):
    tmp = sys.stdin.readline().split()
    if tmp[2] != 'P':
        grade_lst.append((float(tmp[1]),grade_dict.get(tmp[2])))

divide = 0 
sum = 0 
for x in grade_lst:
    divide += x[0]
    sum += x[0]*x[1]

print('%.6f' %(sum/divide))

    
