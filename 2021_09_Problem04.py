import math
n=int(input())
for i in range(0,n):
    money=int(input())
    fish=0
    grass=0
    machine=0
    while(money>=350):
        fish+=50
        machine+=1
        money-=350
    if(money>264):
        fish+=math.floor((money-100)/5)
        machine+=1
    else:
        temp=math.floor(money/8)
        fish+=temp
        grass+=temp*3
    print(f'{fish} {grass} {machine}')
