//無法通過隱藏測資->WA TLE
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
    int acnt,pswd;
    int data[6][3];
    data[0][0]=123;
    data[0][1]=456;
    data[0][2]=9000;
    data[1][0]=456;
    data[1][1]=789;
    data[1][2]=5000;
    data[2][0]=789;
    data[2][1]=888;
    data[2][2]=6000;
    data[3][0]=336;
    data[3][1]=558;
    data[3][2]=10000;
    data[4][0]=775;
    data[4][1]=666;
    data[4][2]=12000;
    data[5][0]=566;
    data[5][1]=221;
    data[5][2]=7000;
    bool flag=false;
    int num=0;
    while(flag==false){
        num=0;
        cin>>acnt>>pswd;
        while(acnt!=data[num][0]){
            num++;
            if(num>5){
                num=99;
                break;
            }
        }
        if(num==99) cout<<"ERROR"<<endl;
        else if(pswd==data[num][1]){
            flag=true;
            cout<<"OK"<<endl;
        }
        else cout<<"ERROR"<<endl;
    }
    string func,temper;
    getline(cin,temper);
    bool end=false;
    while(end==false){
        getline(cin,func);
        if(func[0]=='L'){
            int len=func.length();
            int temp,ans=0;
            for(int i=2;i<len;i++){
                temp=func[i];
                temp-=48;
                ans+=temp*(int)pow(10,len-1-i);
            }
            if(ans<=data[num][2]){
                data[num][2]-=ans;
                cout<<"OK"<<endl;
            }
            else cout<<"ERROR"<<endl;
        }
        else if(func[0]=='S'){
                cout<<data[num][2]<<endl;
        }
        else if(func[0]=='E'){
                end=true;
        }
        else cout<<"ERROR"<<endl;
    }
    cout<<"BYE"<<endl;
}
