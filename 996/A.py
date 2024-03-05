n=int(input())
coins=[100,20,10,5,1]
balance=0
c=0
for i in coins:
    balance+=n//i
    n%=i
   
print(balance)
 

