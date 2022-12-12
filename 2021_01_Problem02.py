from itertools import permutations 
n=int(input())
name=[]
gift=[]
temp=[]
ans=[]
cnt=0
for i in range(0,n):
    temp1,temp2=input().split(' ')
    name.append(temp1)
    gift.append(temp2)
    temp.append(i)
giftperm=permutations(gift)
for i in list(giftperm):
    flag=True
    for j in range(0,n):
        if gift[j]==i[j]:
            flag=False
            break
    if flag==True:
        ans.append(i)
        cnt+=1
print(cnt)
for i in ans:
    for j in range(n):
        if j==0:
            print(f'{name[j]} {i[j]}',end='')
        else:
            print(f',{name[j]} {i[j]}',end='')
    print()
