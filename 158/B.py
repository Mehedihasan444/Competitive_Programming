
def bestFit( weight,n,c):
    res=0
    bin_rem=[0]*n
    for i in range(n):
        j=0
        min=c+1
        bi=0
        for j in range(res):
            if bin_rem[j]>=weight[i]and bin_rem[j]-weight[i]<min:
                bi=j
                min=bin_rem[j]-weight[i]
        if min==c+1:
            bin_rem[res]=c-weight[i]
            res+=1
        else:
            bin_rem[bi]-=weight[i]
    return res
if __name__ == '__main__':
    n=int(input())
    s=list(map(int,input().split()))
    c=4
    result=bestFit(s,n,c)
            
    print(result)

# n=int(input())
# s=list(map(int,input().split()))
# s.sort(reverse=True)
# count=0
# for i in range(n):
#     if s[i]==4:
#         s[i]=-1
#         count+=1
#     elif s[i]!=-1:
#         temp=s[i]
#         for j in range(i,n):
#             temp+=s[j]
#             temp2=s[j]
#             s[j]=-1
#             if temp>4 :
#                 temp-=s[j]
#                 s[j]=temp2
#                 continue
            
#             elif temp==4:
#                 count+=1
#                 break
#             elif j==n-1 and temp<4:
#                  count+=1
#                  break
# for i in range(n):
#         #  temp=s[i]
#          temp+=s[i]
#          temp2=s[i]
#          s[i]=-1
#          if temp>4 :
#                 temp-=s[i]
#                 s[i]=temp2
#                 count+=1       

# print(s)
# print(count,end=" ")
# n=int(input())
# s=list(map(int,input().split()))
# s.sort(reverse=True)
# count=0
# for i in range(n):
#     if s[i]==4:
#         s[i]=-1
#         count+=1
#     elif s[i]!=-1:
#         flag=0
        
#         temp=s[i]
#         for j in range(i,n):
#             temp2=s[j]
#             temp+=temp2
          
#             if temp==4:
#                 flag=1
#                 count+=1
#                 for k in range(i,j+1):
#                     s[k]=-1

                
#         if flag==0:
#             count+=1
#             s[i]=-1

# print(s)
# print(count,end=" ")