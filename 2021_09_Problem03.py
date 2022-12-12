n=int(input())
for i in range(0,n):
    m,x,y=input().split(' ')
    m=int(m)
    x=int(x)
    y=int(y)
    road=[0]*m
    road[0]=1
    for j in range(0,m,x):
        road[j]=1
    for j in range(m-1,0,-y):
        road[j]=2
    print(road.count(1),road.count(2)+1)
