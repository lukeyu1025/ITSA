//未完成
#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        string str,ans;
        int t=0,start=0;
        cin>>str;
        for(int i=0;i<str.length();i++){
            if(str[i]=='T'){
                int temp=i-1;
                if(isdigit(str[temp])){
                    t=i;
                }
            }
        }
        start=t-1;
        bool flag=true;
        while(flag=true){
            cout<<str[start]<<endl;
            if(isdigit(str[start])){
                start--;
                if(start==-1){
                    flag=false;
                }
            }
            else if(str[start]=='+'||str[start]=='-'||str[start]=='.'){
                start--;
                if(start==0){
                    flag=false;
                }
            }
            else flag=false;
        }
        //cout<<start<<endl;
    }
}
