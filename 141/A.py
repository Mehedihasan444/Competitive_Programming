str1=input()
str2=input()
str3=input()
str=str1+str2
stack=list(str)
for j in str3:
    if j in stack:
       stack.remove(j)
   

if len(str1+str2)!=len(str3):
    print("NO")
elif len(stack)==0:
    print("YES")
else:
    print("NO")


