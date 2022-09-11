#include <iostream>
using namespace std;
int main(){
    int posi[3][4];
    for(int k=0;k<=2;k++){
        for(int i=0;i<=3;i++){
            cin>>posi[k][i];   
        }
    }
    bool flag1=false,flag2=false,flag3=false;
    //x for A and B
    if(posi[0][0]<=posi[1][0]&&posi[0][2]>=posi[1][0])flag1=true;
    else if(posi[0][0]>=posi[1][0]&&posi[0][0]<=posi[1][2])flag1=true;
    //y for A and B
    if(posi[0][1]<=posi[1][1]&&posi[0][3]>=posi[1][1])flag2=true;
    else if(posi[0][1]>=posi[1][1]&&posi[0][1]<=posi[1][3])flag2=true;
    if(flag1==true&&flag2==true)flag3=true;
    flag1=false;
    flag2=false;
    
    //x for A and C
    if(posi[0][0]<=posi[1][0]&&posi[0][2]>=posi[1][0])flag1=true;
    else if(posi[0][0]>=posi[1][0]&&posi[0][0]<=posi[1][2])flag1=true;
    //y for A and C
    if(posi[0][1]<=posi[2][1]&&posi[0][3]>=posi[2][1])flag2=true;
    else if(posi[0][1]>=posi[2][1]&&posi[0][1]<=posi[2][3])flag2=true;
    if(flag1==true&&flag2==true)flag3=true;
    flag1=false;
    flag2=false;
    
    //x for C and B
    if(posi[2][0]<=posi[1][0]&&posi[2][2]>=posi[1][0])flag1=true;
    else if(posi[2][0]>=posi[1][0]&&posi[2][0]<=posi[1][2])flag1=true;
    //y for C and B
    if(posi[2][1]<=posi[1][1]&&posi[2][3]>=posi[1][1])flag2=true;
    else if(posi[2][1]>=posi[1][1]&&posi[2][1]<=posi[1][3])flag2=true;
    if(flag1==true&&flag2==true)flag3=true;
    
    if(flag3==false)cout<<'F'<<endl;
    else cout<<'T'<<endl;
}
