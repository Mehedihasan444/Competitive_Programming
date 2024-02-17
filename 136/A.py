
n = int(input())
a = [n]  
for i in range(1,n+1):
    a.append(int(input()))
for i in range(1,n+1):
    for j in range(1,n+1):
        if (a[j] == i):
            print(j, end=" ")
            
        
