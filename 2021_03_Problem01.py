n=int(input())
string=input()
timeline=[0]*24
string=string.split( )
string=[int(x) for x in string]
for i in range(0,len(string),2):
    for j in range(string[i],string[i+1]+1):
        timeline[j-1]+=1
print(max(timeline))
    
