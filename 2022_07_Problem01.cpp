#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int  arrUp[4],arrDown[4],arrOut[2]={0};
        bool flag=true,flag1=true;
        string temp;
        cin>>temp;
        arrUp[0]=temp[0]-48;
        arrDown[0]=temp[2]-48;
        if(temp[1]!=47)flag=false;
        if(arrDown[0]==0)flag1=false;
        cin>>temp;
        arrUp[1]=temp[0]-48;
        arrDown[1]=temp[2]-48;
        if(arrDown[1]==0)flag1=false;
        if(temp[1]!=47)flag=false;
        if(flag==false){cout<<"Input format error."<<endl;}
        else if(flag1==false){cout<<"Input value error."<<endl;}
        else{
        arrUp[2]=arrUp[0]*arrDown[1]+arrUp[1]*arrDown[0];
        arrDown[2]=arrDown[0]*arrDown[1];
        arrUp[3]=arrUp[0]*arrUp[1];
        arrDown[3]=arrDown[0]*arrDown[1];
        for(int j=2;j<=3;j++){
            int num=2;
            arrOut[j-2]=arrUp[j]/arrDown[j];
            if(arrOut[j-2]!=0){arrUp[j]%=arrDown[j];}
            while(arrUp[j]>=num){
                while(arrUp[j]%num==0&&arrDown[j]%num==0){
                    arrUp[j]/=num;
                    arrDown[j]/=num;
                }
                num++;
            }
        }
            if(arrOut[0]==0){cout<<arrUp[2]<<"/"<<arrDown[2]<<endl;}
            else{cout<<arrOut[0]<<" "<<arrUp[2]<<"/"<<arrDown[2]<<endl;}
            if(arrOut[1]==0){cout<<arrUp[3]<<"/"<<arrDown[3]<<endl;}
            else{cout<<arrOut[1]<<" "<<arrUp[3]<<"/"<<arrDown[3]<<endl;}
        }
    }
    return 0;
}
