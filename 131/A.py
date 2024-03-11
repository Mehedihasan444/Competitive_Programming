s=input()
capitalLi=False
c=0
c2=0
if s[0]>='a' and s[0]<='z':
    capitalLi=True
for i in s:
    if i>='a' and i<='z':
        c+=1
    elif i>='A' and i<='Z':
        c2+=1
if c==1 and  capitalLi==True:
    print(s.capitalize())
# elif c2==len(s):
#     print(s.capitalize())
elif s.isupper():
    print(s.lower())
else:
    print(s)
