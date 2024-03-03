n=int(input())
array=list(map(int,input().split()))
 
count=[]
c=1
for i in range(n-1):
    if array[i]<=array[i+1]:
        c+=1
    else:
       count.append(c)
       c=1

count.append(c)
if len(count)==0:
    print(c)
else:
    print(max(count))