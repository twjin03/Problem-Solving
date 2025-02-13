
import sys 

sang = int(sys.stdin.readline())
jung = int(sys.stdin.readline())
ha   = int(sys.stdin.readline()) 
coke = int(sys.stdin.readline())
sprite = int(sys.stdin.readline())


buger = min(sang, jung, ha)
drink = min(coke,sprite)

print(buger + drink - 50)