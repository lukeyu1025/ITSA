s=['']*2
s[0]=input()
s[1]=input()
first=['']*3
first[0],first[1],first[2]=input().split(' ')
bonus=['']*2
bonus[0],bonus[1]=input().split(' ')
cash=0
n=int(input())
for i in range(0,n):
    temp=input()
    if temp==s[0]:cash+=10000000
    elif temp==s[1]:cash+=2000000
    elif temp==first[0]:cash+=200000
    elif temp==first[1]:cash+=200000
    elif temp==first[2]:cash+=200000
    elif temp[1:]==first[0][1:]:cash+=40000
    elif temp[1:]==first[1][1:]:cash+=40000
    elif temp[1:]==first[2][1:]:cash+=40000
    elif temp[2:]==first[0][2:]:cash+=10000
    elif temp[2:]==first[1][2:]:cash+=10000
    elif temp[2:]==first[2][2:]:cash+=10000
    elif temp[3:]==first[0][3:]:cash+=4000
    elif temp[3:]==first[1][3:]:cash+=4000
    elif temp[3:]==first[2][3:]:cash+=4000
    elif temp[4:]==first[0][4:]:cash+=1000
    elif temp[4:]==first[1][4:]:cash+=1000
    elif temp[4:]==first[2][4:]:cash+=1000
    elif temp[5:]==first[0][5:]:cash+=200
    elif temp[5:]==first[1][5:]:cash+=200
    elif temp[5:]==first[2][5:]:cash+=200
    elif temp[5:]==bonus[0]:cash+=200
    elif temp[5:]==bonus[1]:cash+=200
print(cash)
