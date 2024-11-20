s=input()
words_list=[]
i=0
while i<len(s):
    if s[i:i+3]=="WUB":
        i+=3
    else:
        word_start=i
        while i<len(s) and s[i:i+3] !="WUB":
            i+=1
        words_list.append(s[word_start:i])
print(" ".join(words_list))