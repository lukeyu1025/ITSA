n=int(input())
for i in range(0,n):
    temp=input().split(' ')
    flag=False
    if temp[1]=='1' or temp[1]=='2':
        if temp[3]=='3' or temp[3]=='4':
            if temp[4]=='1' or temp[4]=='2':
                if temp[5]=='1' or temp[5]=='2':
                    if temp[6]=='3' or temp[6]=='4':
                        if temp[8]=='3' or temp[8]=='4':
                            if temp[10]=='1' or temp[10]=='2':
                                if temp[11]=='3' or temp[11]=='4':
                                    if temp[12]=='3' or temp[12]=='4':flag=True
    else:
        if temp[3]=='1' or temp[3]=='2':
            if temp[4]=='1' or temp[4]=='2':
                if temp[5]=='3' or temp[5]=='4':
                    if temp[6]=='3' or temp[6]=='4':
                        if temp[8]=='1' or temp[8]=='2':
                            if temp[10]=='3' or temp[10]=='4':
                                if temp[11]=='3' or temp[11]=='4':
                                    if temp[12]=='1' or temp[12]=='2':flag=True
    if flag==True:
        print('OK!')
    else:
        print('Error!')
