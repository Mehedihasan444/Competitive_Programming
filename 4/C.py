


n = int(input())
names = {}

for _ in range(n):
    s = input()
    
    if s in names:
        names[s] += 1
        temp = f"{s}{names[s]}"
        print(temp)
    else:
        names[s] = 0
        print("OK")
