#include <iostream>
#include <cctype>
using namespace std;
int main(){
    int num;
    string tmp;
    cin>>num;
    getline(cin,tmp);
    for(int i=0;i<num;i++){
        int len=0;
        char sen[100];
        string sent="";
        getline(cin,sent);
        while(sent[len]!=46){
            char temp;
            if(isupper(sent[len])){
                temp=tolower(sent[len])+2;
                if(temp>122)temp-=26;
            }
            else if(islower(sent[len])){
                temp=toupper(sent[len])+2;
                if(temp>90)temp-=26;
            }
            else if(isdigit(sent[len])){
                temp=sent[len]+4;
                if(temp>57)temp-=10;
            }
            else temp=sent[len];
            cout<<temp;
            len++;
        }
        cout<<sent[len]<<endl;
    }
}
