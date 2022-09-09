#include <iostream>
using namespace std;
int main(){
    string type;
    cin>>type;
    string ans[100];
    int price[100][2];
    int len=0,cost,temp;
    while(type!="-1"){
        bool flag=true;
        cin>>cost>>temp;
        for(int i=0;i<len;i++){
            if(ans[i]==type){
                price[i][1]++;
                flag=false;
                i=len;
            }
        }
        if(flag==true){
            ans[len]=type;
            price[len][0]=cost;
            price[len][1]=1;
            len++;
        }
        cin>>type;
    }
    int total=0;
    temp=0;
    for(int i=0;i<len;i++){
        temp=price[i][0]*price[i][1];
        total+=temp;
        cout<<ans[i]<<" "<<price[i][1]<<" "<<temp<<endl;
    }
    cout<<total<<endl;
}
