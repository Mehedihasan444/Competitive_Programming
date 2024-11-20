t=int(input())
lis=[]
for i in range(t):
    n=int(input())
    lis.append(n)
r=0
for i in lis:
    if i==0 or i==1 or i==2:
        print(0)
    elif i%2==0:
        r= (i//2)-1
        print(r)
    else:
        r= (i//2)
        print(r)


