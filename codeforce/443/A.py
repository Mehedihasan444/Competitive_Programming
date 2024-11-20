letters=input()
str=[]
for i in range(len(letters)):
    if letters[i]>='a' and letters[i]<='z':
        str.append(letters[i].lower())
str.sort()

dis=len(set(str))
print(dis,end="")