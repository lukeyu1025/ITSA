#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    string temp;
    getline(cin,temp);
    for(int i=0;i<num;i++){
        string str;
        getline(cin,str);
        int len=str.length();
        int ans[len]={0},max=0,posi=0;
        for(int j=0;j<len;j++){
            for(int k=0;k<=j;k++){
                if(str[j]==str[k]){
                    ans[k]++;
                }
                if(ans[k]>max){
                    max=ans[k];
                    posi=k;
                }
            }
        }
        cout<<str[posi]<<endl;
    }
}
