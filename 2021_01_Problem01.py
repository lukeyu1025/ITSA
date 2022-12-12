import math
def T(t0,times):
    if(times>0):
        return T(t0,times-1)+times*2.71828
    else:
        return t0
n=int(input())
for i in range(0,n):
    t0,times=input().split(',')
    t0=float(t0)
    times=int(times)
    print('%.4f'%(math.floor(T(t0,times)*10000)/10000))
