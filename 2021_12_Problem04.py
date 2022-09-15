import re
n=int(input())
while n:
    n=n-1
    s=input()
    match=re.findall(r'([+-]?)(\d+(\.\d+)?)[tT]',s)
    if len(match)!=1:
        print("oops")
        continue
    sign=match[0][0]
    num=float(match[0][1])
    num*=5
    num=round(num,2)
    print(sign,end='')
    if match[0][2] != '':
        print("{0:.2f}C".format(num))
    else:
       print("{0:.0f}C".format(num))
